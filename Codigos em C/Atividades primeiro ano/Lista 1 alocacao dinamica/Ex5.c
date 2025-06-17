/*5 (desafio).
Crie um programa em C que permita ao usuário inserir sequencialmente números inteiros. 
O programa deve alocar dinamicamente memória para armazenar esses números em um array. 
Após cada inserção, o programa deve exibir a soma dos números até aquele ponto. 
O programa deve continuar a pedir números até que o usuário insira 0, indicando o fim da entrada. 
Finalmente, exiba a soma total dos números inseridos e libere a memória alocada.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nums, soma = 0;
    int tamanho = 1; // Tamanho inicial

    nums = (int *)malloc(tamanho * sizeof(int));

    for (int i = 0;; i++) {
        printf("Digite um número: ");
        scanf("%d", &nums[i]);

        if (nums[i] == 0) {
            break;
        }

        soma += nums[i];

        printf("Soma até esse momento: %d\n", soma);

        tamanho *= 2; // Multiplica o tamanho por 2 a cada iteração
        nums = (int *)realloc(nums, tamanho * sizeof(int));
    }

    printf("Resultado final da soma: %d\n", soma);

    // Libera a memória alocada
    free(nums);

    return 0;
}
