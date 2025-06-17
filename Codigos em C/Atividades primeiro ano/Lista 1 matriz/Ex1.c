/*Implemente um programa que:
● Preencha uma matriz 3 X 3 com valores inteiros, maiores que zero;
● Apresente todos os números da matriz;
● Encontre e apresente o maior valor da matriz.*/
#include <stdio.h>

int main(){
    int matriz[3][3];
    int maior = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] > maior) maior = matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Maior valor = %d\n", maior);
}