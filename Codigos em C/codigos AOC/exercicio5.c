#include <stdio.h>

int main() {
    int memoria[100] = {0};
    int AC = 0; // Acumulador

    // Passo 1: armazenar valor
    memoria[10] = 5; // valor inicial

    // Passo 2: carregar valor para o acumulador
    AC = memoria[10];

    // Passo 3: aplicar left shift (multiplica por 2)
    AC = AC << 1;  // equivale a AC * 2
    memoria[30] = AC;  // armazenar resultado do left shift

    // Passo 4: recarregar valor original
    AC = memoria[10];

    // Passo 5: aplicar right shift (divide por 2)
    AC = AC >> 1;  // equivale a AC / 2 (parte inteira)
    memoria[31] = AC;  // armazenar resultado do right shift

    // Exibir resultados
    printf("Valor original armazenado: %d\n", memoria[10]);
    printf("Resultado do left shift armazenado em memoria[30]: %d\n", memoria[30]);
    printf("Resultado do right shift armazenado em memoria[31]: %d\n", memoria[31]);

    return 0;
}
