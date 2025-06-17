/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/
#include <stdio.h>

int main(){
    int num, *pont_num;
    float d_num, *pont_d_num;
    char letra, *pont_letra;

    pont_num = &num;
    pont_d_num = &d_num;
    pont_letra = &letra;

    *pont_num = 5;
    *pont_d_num = 5.75;
    *pont_letra = 's';

    printf("Primeiro numero inteiro: %d\n", *pont_num);
    printf("Primeiro numero real: %.2f\n", *pont_d_num);
    printf("Primeiro caractere: %c\n", *pont_letra);

    *pont_num = 8;
    *pont_d_num = 23.7;
    *pont_letra = 'j';    

    printf("segundo numero inteiro: %d\n", *pont_num);
    printf("segundo numero real: %.2f\n", *pont_d_num);
    printf("segundo caractere: %c\n", *pont_letra);
}
