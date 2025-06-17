/*8. Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.*/
#include <stdio.h>
#define TAMANHO 5

void preenche_array(int vetor[TAMANHO], int num){
    int *pont = vetor;//iniciali\a o ponteiro pro começo do vetor
    
    while(pont < vetor + TAMANHO){
        *pont = num;//preenche o ponteiro com o valor do numero
        pont++;//move para o proximo elemento do vetor
    }
}

int main(){
    int num, vetor[TAMANHO];

    printf("Digite um valor: ");
    scanf("%d", &num);

    preenche_array(vetor, num);

    for(int i = 0; i < TAMANHO; i++){
        printf("%d\n", vetor[i]);
    }
}