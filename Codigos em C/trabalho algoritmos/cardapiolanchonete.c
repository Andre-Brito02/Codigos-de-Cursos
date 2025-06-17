#include <stdio.h>
#include <stdlib.h>

int main(){

    int codigo_pedido, quantidade;
    float valor_total;

    printf("Informe o codigo do pedido: ");
    scanf("%d", &codigo_pedido);
    

    if(codigo_pedido == 100){
        printf("Informe a quantidade que deseja: ");
        scanf("%d", &quantidade);
        valor_total = quantidade * 7.5;
        printf("Valor total a pagar = %.2f\n", valor_total);
    }

    else if(codigo_pedido == 101){
        printf("Informe a quantidade que deseja: ");
        scanf("%d", &quantidade);
        valor_total = quantidade * 5.5;
        printf("Valor total a pagar = %.2f\n", valor_total);
    }

    else if(codigo_pedido == 103){
        printf("Informe a quantidade que deseja: ");
        scanf("%d", &quantidade);
        valor_total = quantidade * 10.5;
        printf("Valor total a pagar = %.2f\n", valor_total);
    }

    else if(codigo_pedido == 104){
        printf("Informe a quantidade que deseja: ");
        scanf("%d", &quantidade);
        valor_total = quantidade * 11;
        printf("Valor total a pagar = %.2f\n", valor_total);
    }

    else if(codigo_pedido == 105){
        printf("Informe a quantidade que deseja: ");
        scanf("%d", &quantidade);
        valor_total = quantidade * 13.5;
        printf("Valor total a pagar = %.2f\n", valor_total);
    }

    else if(codigo_pedido == 106){
        printf("Informe a quantidade que deseja: ");
        scanf("%d", &quantidade);
        valor_total = quantidade * 3.5;
        printf("Valor total a pagar = %.2f\n", valor_total);
    }

    else{
        printf("Produto nao encontrado\n");
    }

    system("pause");
}