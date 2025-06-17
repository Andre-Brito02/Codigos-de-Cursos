/*Faça um programa que receba a temperatura média de cada mês do ano,
armazenando-as em um vetor. Calcule e mostre a maior e a menor temperatura do ano e
em que mês ocorreram (mostrar o mês por extenso: 1 – janeiro, 2 – fevereiro...).
Desconsidere empates.*/
#include <iostream>
#include <random>
#include <iomanip>
#include <limits>
using namespace std;

const string nomesDosMeses[] = {
    "Janeiro",
    "Fevereiro",
    "Março",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro"
};

int main(){
    float temperaturaMes[12];
    random_device rd;
    mt19937 gen(rd());
    float menor = numeric_limits<float>::max();
    float maior = numeric_limits<float>::lowest();
    int indiceMenor = 0, indiceMaior = 0;

    for(int i = 0; i < 12; i++){
        if(i < 2 || i == 11){
            uniform_real_distribution<> distrib(17.0, 40.0);
            temperaturaMes[i] = distrib(gen);
        }

        else if(i >= 2 && i <= 4){
            uniform_real_distribution<> distrib(10.0, 28.0);
            temperaturaMes[i] = distrib(gen);
        }
        
        else if(i >= 5 && i <= 7){
            uniform_real_distribution<> distrib(0.0, 23.1);
            temperaturaMes[i] = distrib(gen);
        }
        
        else if(i >= 8 && i <= 10){
            uniform_real_distribution<> distrib(15.0, 30.0);
            temperaturaMes[i] = distrib(gen);
        }

        if(temperaturaMes[i] < menor){
            menor = temperaturaMes[i];
            indiceMenor = i;
        }

        if(temperaturaMes[i] > maior){
            maior = temperaturaMes[i];
            indiceMaior = i;
        }
    }

    cout << fixed << setprecision(2); 
    cout << "A menor temperatura foi de " << menor << "°C registrada no mês " << nomesDosMeses[indiceMenor] << endl;
    cout << "A maior temperatura foi de " << maior << "°C registrada no mês " << nomesDosMeses[indiceMaior] << endl;

    return 0;
}