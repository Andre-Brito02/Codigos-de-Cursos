/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros.
Calcule e mostre:
● todos os números pares;
● a quantidade de números pares;
● todos os números ímpares;
● a quantidade de números ímpares.*/
#include <iostream>
#include <random>
using namespace std;
const int TAMANHO = 6;

void exibeNumeros(int lista[TAMANHO], int quantidade){
    for(int i = 0; i < quantidade; i++){
        cout << lista[i] << " ";
    }
    cout << endl;
}

int main(){
    int numeros[TAMANHO], numerosPares[TAMANHO], numerosImpares[TAMANHO];
    int qtdPares = 0, qtdImpares = 0;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);

    for(int i = 0, x = 0, y = 0; i < TAMANHO; i++){
        numeros[i] = distrib(gen);

        if(numeros[i] %2 == 0){
            numerosPares[x] = numeros[i];
            qtdPares++;
            x++;
        }else{
            numerosImpares[y] = numeros[i];
            qtdImpares++;
            y++;
        }
    }

    cout << "Quantidade de números pares: " << qtdPares << endl;
    exibeNumeros(numerosPares, qtdPares);

    cout << "Quantidade de números ímpares: " << qtdImpares << endl;
    exibeNumeros(numerosImpares, qtdImpares);
    
    return 0;
}