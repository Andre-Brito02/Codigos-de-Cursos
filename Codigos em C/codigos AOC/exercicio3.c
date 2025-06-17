#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int numero = rand() % 10;

    int memoria[100] = {0};
    int ac;

    memoria[5] = numero;

    memoria[10] = 0;
    memoria[11] = 1;

    ac = memoria[5];

    if(ac == 0){
        memoria[15] = memoria[10];
    }else{
        memoria[15] = memoria[11];
    }

    printf("Número lido: %d\n", ac);
    printf("Valor armazenado na posição 15: %d\n", memoria[15]);
}