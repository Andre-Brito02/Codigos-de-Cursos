/*2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba o maior endereço.*/
#include <stdio.h>

int main(){
    int num1, num2;

    if(&num1 > &num2){
        printf("O maior endereco eh o %p que pertence a primeira variavel.\n", &num1);
    }

    else{
        printf("O maior endereco eh o %p que pertence a segunda variavel.\n", &num2);
    }
}
