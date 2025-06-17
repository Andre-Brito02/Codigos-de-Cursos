/*4. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e os ordene, ou seja, o menor valor na primeira variável, o segundo
menor valor na variável do meio, e o maior valor na última variável. No programa principal,
exibir os valores ordenados na tela.*/
#include <stdio.h>

void ordena_numeros(int *num1, int *num2, int *num3){
    int menor_num = 0, num_meio = 0, maior_num = 0;

    if((*num1 > *num2 && *num1 > *num3) && *num2 > *num3){
        menor_num = *num3;
        num_meio = *num2;
        maior_num = *num1;
    }
    
    else if((*num1 > *num2 && *num1 > *num3) && *num3 > *num2){
        menor_num = *num2;
        num_meio = *num3;
        maior_num = *num1;
    }

    else if((*num2 > *num1 && *num2 > *num3) && *num1 > *num3){
        menor_num = *num3;
        num_meio = *num1;
        maior_num = *num2;
    }
    
    else if((*num2 > *num1 && *num2 > *num3) && *num3 > *num1){
        menor_num = *num1;
        num_meio = *num3;
        maior_num = *num2;
    }
    
    else if((*num3 > *num1 && *num3 > *num2) && *num1 > *num2){
        menor_num = *num2;
        num_meio = *num1;
        maior_num = *num3;
    }

    else if((*num3 > *num1 && *num3 > *num2) && *num2 > *num1){
        menor_num = *num1;
        num_meio = *num2;
        maior_num = *num3;
    }

    *num1 = menor_num;
    *num2 = num_meio;
    *num3 = maior_num;
}

int main(){
    int num1, num2, num3;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite um valor: ");
    scanf("%d", &num2);
    
    printf("Digite um valor: ");
    scanf("%d", &num3);

    ordena_numeros(&num1, &num2, &num3);

    printf("Menor numero: %d\nNumero do meio: %d\nMaior numero: %d\n", num1, num2, num3);
}