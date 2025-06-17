/*Crie uma sub-rotina que receba como parâmetro um vetor A de 25 números inteiros
e substitua todos os valores negativos de A por zero. O vetor resultante deverá ser
mostrado no programa principal.*/
#include <stdio.h>

void mudaVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }
}

void main(){
    int tamanho = 25, vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    mudaVetor(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}