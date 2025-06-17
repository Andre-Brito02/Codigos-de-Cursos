#include <stdio.h>

int main() {
    int memoria[100] = {0}; // Memória com 100 posições
    int AC = 0; // Acumulador

    // Passo 1: Armazenar os valores 5 e 10 nas posições 10 e 11
    memoria[10] = 5;
    memoria[11] = 10;

    // Passo 2: Executar instruções simuladas da arquitetura IAS
    AC = memoria[10];       // LOAD M(10)
    AC = AC + memoria[11];  // ADD M(11)
    memoria[12] = AC;       // STORE M(12)

    // Passo 3: Mostrar o conteúdo da posição 12
    printf("Resultado da soma (memoria[12]) = %d\n", memoria[12]);

    return 0;
}
