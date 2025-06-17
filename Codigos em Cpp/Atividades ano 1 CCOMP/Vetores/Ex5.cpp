/*Faça um programa que preencha um vetor com os registros acadêmicos (RA) de sete
alunos e carregue outro vetor com a média final desses alunos. Calcule e mostre:
● o RA do aluno com maior média (desconsiderar empates);
● para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse
aluno precisa tirar na prova de exame final para ser aprovado. Considerar que a
média para aprovação no exame é 5.*/
#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
const int QTDALUNOS = 7;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distrib(0.0, 10.0);

    int raAlunos[QTDALUNOS];
    float mediaAlunos[QTDALUNOS];
    int indiceMaiorMedia = 0;
    float maior = 0;

    cout << "Preenchendo o RA e média dos alunos" << endl;
    for(int i = 0; i < QTDALUNOS; i++){
        raAlunos[i] = i;
        mediaAlunos[i] = distrib(gen);

        if(mediaAlunos[i] > maior){
            maior = mediaAlunos[i];
            indiceMaiorMedia = i;
        }
    }

    cout << fixed << setprecision(2); 
    for(float valor: mediaAlunos){
        cout << "Media: " << valor;
        if(valor < 7.0){
            cout << ". Precisa tirar: " << (10.0 - valor);
        }
        cout << endl;
    }

    cout << "Maior média encontrada: " << mediaAlunos[indiceMaiorMedia] << " do aluno: " << raAlunos[indiceMaiorMedia] << endl;
}