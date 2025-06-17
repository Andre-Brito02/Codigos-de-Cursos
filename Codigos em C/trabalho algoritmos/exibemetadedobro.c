#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(numero > 50){
        float metade = numero / 2;
        printf("Metade do numero %d = %.2f\n", numero, metade);
    }else{
        int dobro = numero * 2;
        printf("Dobro do numero %d = %d\n", numero, dobro);
    }

    system("pause");
}