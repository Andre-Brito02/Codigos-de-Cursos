/*2. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma
função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o
dobro de A na própria variável A e o dobro de B na própria variável B. No programa principal
mostre o valor da soma, de A e também de B.*/
#include <stdio.h>

int calcula_soma(int *A, int *B){
    int dobro_a = *A * 2;
    int dobro_b = *B * 2;
    int soma = dobro_a + dobro_b;

    *A = dobro_a;
    *B = dobro_b;

    return soma;
}

int main(){
    int A, B, soma = 0;

    printf("Digite um valor: ");
    scanf("%d", &A);

    printf("Digite um valor: ");
    scanf("%d", &B);

    soma = calcula_soma(&A, &B);

    printf("Valor A = %d\nValor B = %d\nSoma = %d\n", A, B, soma);
}