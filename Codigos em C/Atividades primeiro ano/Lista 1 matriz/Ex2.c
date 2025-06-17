/*Implemente um programa que carregue uma matriz A 2x2. Em seguida, o maior
número da matriz deve ser encontrado. Por fim, uma matriz B deve ser apresentada,
com os elementos sendo resultantes do seguinte cálculo:
● elemento da matriz A * maior elemento da matriz A*/
#include <stdio.h>

int main(){
    int matriz_A[2][2];
    int matriz_B[2][2];
    int maior_numero = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite um valor: ");
            scanf("%d", &matriz_A[i][j]);

            if(matriz_A[i][j] > maior_numero) maior_numero = matriz_A[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matriz_B[i][j] = matriz_A[i][j] * maior_numero;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%4d", matriz_B[i][j]);
        }
        printf("\n");
    }
}