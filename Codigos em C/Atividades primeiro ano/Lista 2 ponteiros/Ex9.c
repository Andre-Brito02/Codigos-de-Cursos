/*9. Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e
determina o maior elemento do array e o número de vezes que este elemento ocorreu no
array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a
função principal deverá mostrar o valor 15 e o número 3 (indicando que o número 15
ocorreu 3 vezes). A função que verifica o array deve ser do tipo void.*/
#include <stdio.h>
#include <time.h>

#define TAMANHO 30

void qtd_maior_numero(int vetor[TAMANHO], int *qtd, int *maior){
    for(int i = 0; i < TAMANHO; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
    }

    for(int j = 0; j < TAMANHO; j++){
        if(*maior == vetor[j]){
            (*qtd)++;
        }
    }
}

int main(){
    int vetor[TAMANHO], qtd = 0, maior = 0;
    int segundos = time(0);
    srand(segundos);

    for(int i = 0; i < TAMANHO; i++){
        int numerogrande = rand() % 21;
        vetor[i] = numerogrande;
    }   
    
    for(int i = 0; i < TAMANHO; i++){
        printf("%d\n", vetor[i]);
    }   

    qtd_maior_numero(vetor, &qtd, &maior);

    printf("O maior numero eh: %d e apareceu %d vezes\n", maior, qtd);
}