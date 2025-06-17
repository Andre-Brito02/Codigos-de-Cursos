/*5. Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a
variável A e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os
ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o
quádruplo.*/
#include <stdio.h>

int main() {
    int A;
    int *B, **C, ***D;

    // Atribuir o endereço de A aos ponteiros
    B = &A;
    C = &B;
    D = &C;

    // Solicitar ao usuário para inserir o valor de A
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    // Calcular e exibir o dobro, triplo e quádruplo usando ponteiros
    printf("Dobro: %d\n", (*B) * 2);
    printf("Triplo: %d\n", (*(*C)) * 3);
    printf("Quádruplo: %d\n", (*(*(*D))) * 4);

    return 0;
}
