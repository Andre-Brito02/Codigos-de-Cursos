/*Crie um programa que receba as vendas semanais (de um mês com quatro
semanas) de três vendedores de uma loja e armazene essas vendas em uma
matriz. O programa deverá calcular e mostrar:
● o total de vendas do mês de cada vendedor;
● o total de vendas de cada semana (todos os vendedores juntos);
● o total de vendas do mês somando todos os vendedores.*/
#include <stdio.h>

int main(){
    int vendas[3][4];
    int total_vendas_mes[3];
    int vendas_semanais[] = {0,0,0,0};
    int linha = 0, coluna = 0;
    int soma = 0, vendas_totais_mes = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Informe o valor da semana %d do vendedor %d: ", j+1, i+1);
            scanf("%d", &vendas[i][j]);
            soma += vendas[i][j];
        }
        vendas_totais_mes += soma;
        total_vendas_mes[i] = soma;
        soma = 0;
    }

    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 3; i++){
            vendas_semanais[j] += vendas[i][j];
        }
    }
    printf("\n");

    for(int i = 0; i < 3; i++){
        printf("Vendas totais por mes do vendedor %d = %d\n",i+1, total_vendas_mes[i]);
    }

    printf("\n");

    for(int i = 0; i < 4; i++){
        printf("Valores totais da semana %d: %d\n",i+1, vendas_semanais[i]);
    }

    printf("\n");

    printf("Valor total do mes: %d\n", vendas_totais_mes);
}