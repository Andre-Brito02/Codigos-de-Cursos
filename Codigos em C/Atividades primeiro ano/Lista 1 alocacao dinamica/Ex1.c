/*1. Soma de Arrays Dinâmicos. Peça ao usuário para inserir o tamanho de dois arrays
dinâmicos. Aloque memória dinâmica para esses arrays. Peça ao usuário para inserir
valores para ambos os arrays. Crie um terceiro array dinâmico para armazenar a soma dos
elementos dos dois arrays anteriores. Exiba o resultado.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    int *array1, *array2, *array3;

    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    array1 = (int*) malloc(tamanho*sizeof(int)); 
    array2 = (int*) malloc(tamanho*sizeof(int));
    array3 = (int*) malloc(tamanho*sizeof(int));

    for(int i = 0; i < tamanho; i++){
        printf("Digite um valor para o primeiro array: ");
        scanf("%d", &array1[i]);
    }
    
    for(int j = 0; j < tamanho; j++){
        printf("Digite um valor para o segundo array: ");
        scanf("%d", &array2[j]);
    }

    for(int k = 0; k < tamanho; k++){
        array3[k] = array1[k] + array2[k];
    }

    printf("Soma dos elementos: \n");

    for(int i = 0; i < tamanho; i++){
        printf("%4d + %4d = %4d\n", array1[i], array2[i], array3[i]);
    }

    free(array1);
    free(array2);
    free(array3);
}