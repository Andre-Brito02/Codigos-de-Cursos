/*Implemente um programa que receba números para uma matriz A 3x4. Apresente
como saída uma matriz B, em que os elementos são resultantes dos seguintes
cálculos:
● Os números ímpares da matriz A devem ser multiplicados por 3.
● Os números pares da matriz A devem ser multiplicados por 2.*/
#include <stdio.h>

int main(){
    int matriz_A[3][4];
    int matriz_B[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%d", &matriz_A[i][j]);

            if(matriz_A[i][j] %2 == 0){
                matriz_B[i][j] = matriz_A[i][j] * 2;
            }else{
                matriz_B[i][j] = matriz_A[i][j] * 3;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", matriz_B[i][j]);
        }
        printf("\n");
    }
    
}