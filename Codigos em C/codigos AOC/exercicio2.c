#include <stdio.h>

int main() {
    int memoria[100] = {0}; // memória simulada
    int AC = 0; // acumulador

    // Inicializações
    memoria[20] = 5;   // valor inicial
    memoria[21] = 1;   // constante 1 para subtração
    memoria[22] = 0;   // endereço para o "loop" (simulado)

    // Loop de decremento com salto
    while (1) {
        // LOAD M(20)
        AC = memoria[20];

        // SUB M(21)
        AC = AC - memoria[21];

        // STORE M(20)
        memoria[20] = AC;

        // JUMP+ M(22)
        if (AC > 0) {
            // Continua o loop (salta para endereço 22 → simulamos voltando ao início do while)
            continue;
        } else {
            // HALT
            break;
        }
    }

    printf("Valor final (memoria[20]) = %d\n", memoria[20]); // Deve ser 0

    return 0;
}
