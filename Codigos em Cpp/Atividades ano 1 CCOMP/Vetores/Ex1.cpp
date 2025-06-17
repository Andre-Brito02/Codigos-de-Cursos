/*Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre
os números pares e suas respectivas posições no vetor (índice).*/
#include <iostream>
#include <random>
using namespace std;

int main(){
    int numeros[9];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);

    for(int i = 0; i < 9; i++){
        numeros[i] = distrib(gen);

        if(numeros[i] %2 == 0){
            cout << "O número " << numeros[i] << " está na posição: " << i << endl;
        }
    }
    return 0;
}