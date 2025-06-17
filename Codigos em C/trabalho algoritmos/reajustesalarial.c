#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float salario, reajuste, novo_salario;
    char porcentagem = 37;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    if(salario >= 0.0 && salario <= 400.0){
        reajuste = salario * 0.15;
        novo_salario = salario + reajuste;

        printf("Novo salario = %.2f\n", novo_salario);
        printf("Valor do reajuste = %.2f\n", reajuste);
        printf("Indice de reajuste = 15%c\n", porcentagem);
    }

    else if(salario >= 400.01 && salario <= 800.0){
        reajuste = salario * 0.12;
        novo_salario = salario + reajuste;

        printf("Novo salario = %.2f\n", novo_salario);
        printf("Valor do reajuste = %.2f\n", reajuste);
        printf("Indice de reajuste = 12%c\n", porcentagem);
    }

    else if(salario >= 800.01 && salario <= 1200.0){
        reajuste = salario * 0.1;
        novo_salario = salario + reajuste;

        printf("Novo salario = %.2f\n", novo_salario);
        printf("Valor do reajuste = %.2f\n", reajuste);
        printf("Indice de reajuste = 10%c\n", porcentagem);
    }

    else if(salario >= 1200.01 && salario <= 2000.0){
        reajuste = salario * 0.07;
        novo_salario = salario + reajuste;

        printf("Novo salario = %.2f\n", novo_salario);
        printf("Valor do reajuste = %.2f\n", reajuste);
        printf("Indice de reajuste = 7%c\n", porcentagem);
    }

    else{
        reajuste = salario * 0.04;
        novo_salario = salario + reajuste;

        printf("Novo salario = %.2f\n", novo_salario);
        printf("Valor do reajuste = %.2f\n", reajuste);
        printf("Indice de reajuste = 4%c\n", porcentagem);
    }

    system("pause");
}