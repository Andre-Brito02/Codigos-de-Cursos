/*Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre
os números pares e suas respectivas posições no vetor (índice).*/
#include <stdio.h>

int main(){
    int vetor[9];

    for(int i = 0; i < 9; i++){
        printf("Informe um valor: ");
        scanf("%d", &vetor[i]);

        if(vetor[i] %2 == 0){
            printf("O numero %d eh par e esta localizado no vetor de posicao [%d]\n", vetor[i], i);
        }
    }
}