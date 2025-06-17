/*Faça um programa que receba a temperatura média de cada mês do ano,
armazenando-as em um vetor. Calcule e mostre a maior e a menor temperatura do ano e
em que mês ocorreram (mostrar o mês por extenso: 1 – janeiro, 2 – fevereiro...).
Desconsidere empates.*/
#include <stdio.h>

int main(){
    float temperatura[12];
    float maior_temp = 0, menor_temp = 0;
    int indice_maior, indice_menor;

    for(int i = 0; i < 12; i++){
        printf("Informe a temperatura media do mes %d: ", i+1);
        scanf("%f", &temperatura[i]);

        if(i == 0){
            menor_temp = temperatura[i];
        }

        if(temperatura[i] > maior_temp){
            maior_temp = temperatura[i];
            indice_maior = i+1;
        }

        if(temperatura[i] < menor_temp){
            menor_temp = temperatura[i];
            indice_menor = i+1;
        }
    }//for

    printf("A maior temperatura foi registrada no mes %d e foi de %.1f\n", indice_maior, maior_temp);
    printf("A menor temperatura foi registrada no mes %d e foi de %.1f\n", indice_menor, menor_temp);
}