#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(numero %3 == 0){
        printf("O numero %d eh multiplo de 3\n", numero);
    }else{
        printf("O numero %d nao eh multiplo de 3\n", numero);
    }

    system("pause");
}