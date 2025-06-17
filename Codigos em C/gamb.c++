#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Chave para transições: estado atual e símbolo
using TransitionKey = pair<string, char>;

void inicializarAlfabeto(set<char>& alfabeto) {
    // Letras, números e símbolos permitidos
    string simbolos = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.^=*;<>+-(),[]:/";
    alfabeto.insert(simbolos.begin(), simbolos.end());
}

void inicializarTransicoes(map<TransitionKey, string>& transicoes) {
    // Transições para letras
    string alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (char c : alfabeto) {
        transicoes[{"q0", c}] =    transicoes[{"q1", c}] = "q1";
        transicoes[{"q2", c}] = "q1";
    }

    // Transições para números
    string numeros = "0123456789";
    for (char c : numeros) {
        transicoes[{"q0", c}] = "q24";
        transicoes[{"q1", c}] = "q2";
        transicoes[{"q2", c}] = "q2";
        transicoes[{"q24", c}] = "q24";
        transicoes[{"q25", c}] = "q24";
    }

    // Transições para símbolos
    transicoes[{"q0", '.'}] = "q6";
    transicoes[{"q24", '.'}] = "q25";
    transicoes[{"q0", '^'}] = "q3";
    transicoes[{"q0", '*'}] = "q4";
    transicoes[{"q0", '='}] = "q5";
    transicoes[{"q8", '='}] = "q10";
    transicoes[{"q22", '='}] = "q23";
    transicoes[{"q0", ';'}] = "q7";
    transicoes[{"q0", '<'}] = "q8";
    transicoes[{"q0", '>'}] = "q11";
    transicoes[{"q8", '>'}] = "q9";
    transicoes[{"q11", '>'}] = "q12";
    transicoes[{"q0", '+'}] = "q13";
    transicoes[{"q13", '+'}] = "q14";
    transicoes[{"q0", '-'}] = "q15";
    transicoes[{"q15", '-'}] = "q16";
    transicoes[{"q0", ','}] = "q17";
    transicoes[{"q0", '('}] = "q19";
    transicoes[{"q0", ')'}] = "q18";
    transicoes[{"q0", '['}] = "q20";
    transicoes[{"q0", ']'}] = "q21";
    transicoes[{"q0", ':'}] = "q22";
    transicoes[{"q0", '/'}] = "q26";
    transicoes[{"q26", '/'}] = "q27";
}

bool processarComentario(ifstream& leitor, char c) {
    if (c == '/') {
        char proximo = leitor.peek();
        if (proximo == '/') {
            leitor.get(); // Consome o segundo '/'
            string linha;
            getline(leitor, linha); // Ignora até o fim da linha
            return true;
        }
    } else if (c == '(' && leitor.peek() == '*') {
        leitor.get(); // Consome o '*'
        while (leitor.get(c)) {
            if (c == '*' && leitor.peek() == ')') {
                leitor.get(); // Consome o ')'
                break;
            }
        }
        return true;
    } else if (c == '{') {
        while (leitor.get(c)) {
            if (c == '}') break;
        }
        return true;
    }
    return false;
}

string executarAutomato(const string& entrada, const set<char>& alfabeto,
                       const map<TransitionKey, string>& transicoes,
                       const string& estadoInicial, const set<string>& estadosFinais) {
    string estadoAtual = estadoInicial;
    for (char simbolo : entrada) {
        if (alfabeto.find(simbolo) == alfabeto.end()) {
            cout << "Cadeia rejeitada! Símbolo '" << simbolo << "' não pertence ao alfabeto." << endl;
            return "";
        }
        TransitionKey chave = {estadoAtual, simbolo};
        if (transicoes.find(chave) == transicoes.end()) {
            cout << "Cadeia rejeitada! Transição indefinida para (" << estadoAtual << ", " << simbolo << ")." << endl;
            return "";
        }
        estadoAtual = transicoes.find(chave)->second;
    }
    if (estadosFinais.count(estadoAtual)) {
        cout << "Cadeia aceita! Estado final: " << estadoAtual << endl;
        return estadoAtual;
    }
    cout << "Cadeia rejeitada! Parou em estado não final: " << estadoAtual << endl;
    return "";
}

void processarToken(const string& entrada, vector<pair<string, string>>& tabela,
                    const set<string>& Lista_Reservada, const string& estadoFinal) {
    if (estadoFinal.empty()) return;
    
    if (Lista_Reservada.count(entrada)) {
        tabela.emplace_back(entrada, "PR");
    } else if (estadoFinal == "q24" || estadoFinal == "q25") {
        tabela.emplace_back(entrada, "NUM");
    } else if (estadoFinal == "q1") {
        tabela.emplace_back(entrada, "VAR");
    } else {
        tabela.emplace_back(entrada, "SS");
    }
}

void escreverTabelaSimbolos(const vector<pair<string, string>>& tabela, ofstream& escritor) {
    // Encontra o maior comprimento de token
    size_t maxLen = 0;
    for (const auto& [token, tipo] : tabela) {
        maxLen = max(maxLen, token.length());
    }
    maxLen += 2; // Adiciona margem de 2 espaços

    // Escreve a tabela com alinhamento
    for (const auto& [token, tipo] : tabela) {
        escritor << token;
        escritor << string(maxLen - token.length(), ' ') << tipo << endl;
    }
}

int main() {
    // Inicialização do alfabeto
    set<char> alfabeto;
    inicializarAlfabeto(alfabeto);

    // Estados do autômato
    set<string> estados = {"q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9",
                           "q10", "q11", "q12", "q13", "q14", "q15", "q16", "q17",
                           "q18", "q19", "q20", "q21", "q22", "q23", "q24", "q25", "q26", "q27"};
    string estadoInicial = "q0";
    set<string> estadosFinais = {"q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9",
                                 "q10", "q11", "q12", "q13", "q14", "q15", "q16", "q17",
                                 "q18", "q19", "q20", "q21", "q22", "q23", "q24", "q27"};

    // Transições
    map<TransitionKey, string> transicoes;
    inicializarTransicoes(transicoes);

    // Palavras reservadas
    set<string> Lista_Reservada = {"Program", "read", "write", "integer", "boolean", "double",
                                   "function", "procedure", "begin", "end", "and", "array",
                                   "case", "const", "div", "do", "downto", "else", "file",
                                   "for", "goto", "if", "in", "label", "mod", "nil", "not",
                                   "of", "or", "packed", "record", "repeat", "set", "then",
                                   "to", "type", "until", "with", "var", "while"};

    // Símbolos compostos
    set<string> simbolosCompostos = {":=", "<=", ">=", "<>", "++", "--"};

    // Arquivos
    ifstream leitor("teste.txt");
    if (!leitor.is_open()) {
        cout << "Erro ao abrir o arquivo de entrada!" << endl;
        return 1;
    }

    ofstream escritor("TABELA.txt");
    if (!escritor.is_open()) {
        cout << "Erro ao abrir o arquivo de saída!" << endl;
        leitor.close();
        return 1;
    }

    vector<pair<string, string>> tabela;
    string token;
    char c;
    while (leitor.get(c)) {
        if (processarComentario(leitor, c)) {
            continue; // Ignora comentários
        }

        if (isdigit(c) || (c == '.' && !token.empty() && isdigit(token.back()))) {
            token += c; // Acumula números ou ponto em números reais
        } else if (ispunct(c)) {
            if (!token.empty()) {
                string estadoFinal = executarAutomato(token, alfabeto, transicoes, estadoInicial, estadosFinais);
                processarToken(token, tabela, Lista_Reservada, estadoFinal);
                token.clear();
            }

            // Verifica símbolo composto
            char proximo = leitor.peek();
            string possivel_composto = string(1, c) + proximo;
            if (simbolosCompostos.count(possivel_composto)) {
                leitor.get(); // Consome o próximo caractere
                string estadoFinal = executarAutomato(possivel_composto, alfabeto, transicoes, estadoInicial, estadosFinais);
                if (!estadoFinal.empty()) {
                    tabela.emplace_back(possivel_composto, "SC");
                }
            } else {
                string entrada = string(1, c);
                string estadoFinal = executarAutomato(entrada, alfabeto, transicoes, estadoInicial, estadosFinais);
                processarToken(entrada, tabela, Lista_Reservada, estadoFinal);
            }
        } else if (isspace(c)) {
            if (!token.empty()) {
                string estadoFinal = executarAutomato(token, alfabeto, transicoes, estadoInicial, estadosFinais);
                processarToken(token, tabela, Lista_Reservada, estadoFinal);
                token.clear();
            }
        } else {
            token += c; // Acumula caracteres válidos
        }
    }

    // Processa o último token, se houver
    if (!token.empty()) {
        string estadoFinal = executarAutomato(token, alfabeto, transicoes, estadoInicial, estadosFinais);
        processarToken(token, tabela, Lista_Reservada, estadoFinal);
    }

    // Escreve a tabela de símbolos com formatação alinhada
    escreverTabelaSimbolos(tabela, escritor);

    leitor.close();
    escritor.close();
    return 0;
}