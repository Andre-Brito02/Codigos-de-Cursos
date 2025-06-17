#include <stdio.h>
#include <stdlib.h>

int main(){

    int ddd;

    printf("Informe um DDD: ");
    scanf("%d", &ddd);

    if(ddd == 61){
        printf("O DDD informado eh da cidade de Brasilia\n");
    }

    else if(ddd == 71){
        printf("O DDD informado eh da cidade de Salvador\n");
    }

    else if(ddd == 11){
        printf("O DDD informado eh da cidade de Sao Paulo\n");
    }

    else if(ddd == 21){
        printf("O DDD informado eh da cidade de Rio de Janeiro\n");
    }

    else if(ddd == 32){
        printf("O DDD informado eh da cidade de Juiz de Fora\n");
    }

    else if(ddd == 19){
        printf("O DDD informado eh da cidade de Campinas\n");
    }

    else if(ddd == 27){
        printf("O DDD informado eh da cidade de Vitoria\n");
    }

    else if(ddd == 31){
        printf("O DDD informado eh da cidade de Belo Horizonte\n");
    }

    else{
        printf("DDD nao cadastrado\n");
    }

    system("pause");
}