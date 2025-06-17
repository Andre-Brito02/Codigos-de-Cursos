/*Faça um programa que receba o número sorteado por um dado de seis lados jogado
vinte vezes. Mostre os números sorteados e a frequência com que apareceram.*/
#include <iostream>
#include <random>
using namespace std;

int main(){
    int valorDados[20];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 6);
    int qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0, qtd6 = 0;

    for(int i = 0; i < 20; i++){
        valorDados[i] = distrib(gen);

        if(valorDados[i] == 1) qtd1++;
        else if(valorDados[i] == 2) qtd2++;
        else if(valorDados[i] == 3) qtd3++;
        else if(valorDados[i] == 4) qtd4++;
        else if(valorDados[i] == 5) qtd5++;
        else if(valorDados[i] == 6) qtd6++;
    }

    cout << "Valor 1 apareceu " << qtd1 << " vezes." << endl;
    cout << "Valor 2 apareceu " << qtd2 << " vezes." << endl;
    cout << "Valor 3 apareceu " << qtd3 << " vezes." << endl;
    cout << "Valor 4 apareceu " << qtd4 << " vezes." << endl;
    cout << "Valor 5 apareceu " << qtd5 << " vezes." << endl;
    cout << "Valor 6 apareceu " << qtd6 << " vezes." << endl;
}