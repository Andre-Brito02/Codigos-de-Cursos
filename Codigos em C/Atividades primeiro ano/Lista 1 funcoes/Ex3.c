/*Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne
a soma dos divisores desse valor. Utilize passagem por referência.*/
#include <stdio.h>

void somaMultiplos(int numero, int *soma){
    for(int i = 1; i <= numero; i++){
        if(numero %i == 0){
            *soma += i;
        }
    }
}

void main(){
    int numero, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    somaMultiplos(numero, &soma);

    printf("A soma dos multiplos do numero %d eh igual a: %d\n", numero, soma);
}