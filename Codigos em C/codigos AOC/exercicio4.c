#include <stdio.h>
#include <stdlib.h>

int main(){
    int memoria[100] = {0};
    int ac = 0;

    memoria[8] = 3;
    memoria[10] = 5;

    ac = memoria[8];
    ac -= memoria[10];

    memoria[25] = abs(ac);

    printf("Valor armazenado: %d\n", memoria[25]);
}