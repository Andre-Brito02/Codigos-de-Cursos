/*4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis
A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de
A. Realize essa troca utilizando ponteiros.*/
#include <stdio.h>

void troca_valores(int *valor_A, int *valor_B){
    int novo_valor_A = *valor_B;
    int novo_valor_B = *valor_A;

    *valor_A = novo_valor_A;
    *valor_B = novo_valor_B; 
}

int main(){
    int valor_A, valor_B;

    printf("Digite um valor: ");
    scanf("%d", &valor_A);
    
    printf("Digite um valor: ");
    scanf("%d", &valor_B);
    
    printf("Valor inicial de A: %d\n", valor_A);
    printf("Valor inicial de B: %d\n", valor_B);

    troca_valores(&valor_A, &valor_B);

    printf("Valor final de A: %d\n", valor_A);
    printf("Valor final de B: %d\n", valor_B);

}
