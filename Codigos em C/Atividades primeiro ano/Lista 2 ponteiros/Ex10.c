/*10. Crie uma função para somar dois arrays. Esta função deve receber dois arrays e
retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja
diferente então a função retornará ZERO (0). Caso a função seja concluída com sucesso, a
mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do
array.*/
#include <stdio.h>
#define VALOR1 3
#define VALOR2 3

int soma_vetores(int vetor1[VALOR1], int vetor2[VALOR2], int vetor3[VALOR1]){
    int *pont = vetor3;

    if(VALOR1 == VALOR2){
        for(int i = 0;pont < vetor3 + VALOR1; pont++, i++){
            *pont = vetor1[i] + vetor2[i];
        }

        return 1;
    }else{
        return 0;
    }
}

int main(){
    int vetor1[VALOR1], vetor2[VALOR2], vetor3[VALOR1];
    int valor_retornado = 0;

    for(int i = 0; i < VALOR1; i++){
        printf("Digite um numero para o primeiro vetor: ");
        scanf("%d", &vetor1[i]);
    }

    for(int k = 0; k < VALOR2; k++){
        printf("Digite um numero para o segundo vetor: ");
        scanf("%d", &vetor2[k]);
    }

    valor_retornado = soma_vetores(vetor1, vetor2, vetor3);

    printf("Valor retornado = %d\n", valor_retornado);
}