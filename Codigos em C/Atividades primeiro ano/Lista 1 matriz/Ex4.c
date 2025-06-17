/*Crie um programa que leia um vetor vet contendo 18 elementos. A seguir, o
programa deverá distribuir ordenadamente esses elementos em uma matriz 3 × 6 e,
no final, mostrar a matriz.*/
#include <stdio.h>

int main(){
    int vetor[18];
    int matriz[3][6];
    int contador = 0;

    for(int k = 0; k < 18; k++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[k]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            matriz[i][j] = vetor[contador];
            contador++;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

}