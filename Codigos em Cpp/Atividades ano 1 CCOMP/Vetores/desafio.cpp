/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de
objetos. O vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor
total de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um
vetor; a quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma
posição. 
Crie um programa que receba os preços e as quantidades vendidas,
armazenando-os em seus respectivos vetores (ambos com tamanho dez). Depois,
determine e mostre:
● um relatório contendo: quantidade vendida, valor unitário e valor total de cada
objeto. Ao final, deverão ser mostrados o valor geral das vendas e o valor da
comissão que será paga ao vendedor; e
● O valor do objeto mais vendido e sua posição no vetor (não se preocupe com
empates).*/
#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
const int TAMANHO = 10;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distrib_real(10.0, 90.00);
    uniform_int_distribution<> distrib_int(1, 50);

    float precos[TAMANHO];
    int quantidade[TAMANHO], maior = 0, indice;
    float valorTotal = 0.0;

    for(int i = 0; i < TAMANHO; i++){
        precos[i] = distrib_real(gen);
        quantidade[i] = distrib_int(gen);
        valorTotal += quantidade[i] * precos[i];

        if(quantidade[i] > maior){
            maior = quantidade[i];
            indice = i;
        }
    }

    cout << fixed << setprecision(2);
    for(int i = 0; i < TAMANHO; i++){
        cout << precos[i] << " -> " << quantidade[i] << endl;
    }

    cout << "Valor total de vendas: R$ " << valorTotal << endl;
    cout << "Comição vendedor: R$ " << 545.0 + valorTotal * 0.05 << endl;
    cout << "Quantidade do item mais vendido: " << quantidade[indice] << " encontrado na posição: " << indice << endl;
    
}