/*6. Uma loja possui 4 filiais, cada uma com um código de 1 a 4. Um arquivo contendo
todas as vendas feitas durante o dia nas quatro filiais é gerado a partir de uma
planilha, sendo que cada linha do arquivo contém o número da filial e o valor de uma
venda efetuada, separados por vírgula. Ex.:
1,189.90
1,45.70
3,29.90
4,55.00
No exemplo acima, a filial 1 fez duas vendas, a primeira totalizando R$ 189,90 e a
segunda R$ 45,70. A filial 3 fez uma venda de R$ 29,90 e a 4 também uma de R$
55,00. Faça um programa que leia este arquivo e informe, ao final, o total e o valor
médio das vendas de cada filial.*/
#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("vendas.txt", "r"); // Nome do arquivo de vendas

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de vendas.\n");
        return 1;
    }

    double total[4] = {0.0};   // Inicializa o total de vendas para cada filial
    int contador[4] = {0};     // Inicializa o contador de vendas para cada filial

    double valor, media;
    int filial;

    while (fscanf(arquivo, "%d,%lf", &filial, &valor) != EOF) {
        if (filial >= 1 && filial <= 4) {
            total[filial - 1] += valor;  // Atualiza o total da filial correspondente
            contador[filial - 1]++;     // Incrementa o contador da filial correspondente
        }
    }

    fclose(arquivo);

    for (int i = 0; i < 4; i++) {
        if (contador[i] > 0) {
            media = total[i] / contador[i];
            printf("Filial %d - Total de vendas: R$ %.2lf, Valor médio das vendas: R$ %.2lf\n", i + 1, total[i], media);
        } else {
            printf("Filial %d - Nenhuma venda registrada.\n", i + 1);
        }
    }

    return 0;
}
