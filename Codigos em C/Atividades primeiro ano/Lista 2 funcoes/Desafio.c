/*Faça um programa que controle o estoque de uma loja de brinquedos.
Atualmente, no estoque há 40 itens, cada um contendo código, descrição, preço de
compra, preço de venda, quantidade em estoque e estoque mínimo. O programa
deverá:
a. Criar uma rotina para cadastrar os produtos.
b. Criar uma rotina para mostrar o valor do lucro obtido com a venda de
determinado produto (inserido pelo usuário) e o percentual que esse valor
representa.
c. Criar uma rotina que mostre os produtos com quantidade em estoque abaixo
do estoque mínimo permitido.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAMANHO 40

typedef struct{
    int codigo;
    char descricao[50];
    float preco_compra;
    float preco_venda;
    int qtd_em_estoque;
    int estoque_minimo;
}cadastros;

cadastros produtos[TAMANHO];

void cadastro_produtos(cadastros produtos[TAMANHO]){
    for(int i = 0; i < TAMANHO; i++){
        printf("Informe o código do produto: ");
        scanf("%d", &produtos[i].codigo);
        setbuf(stdin,NULL);

        printf("Descreva o produto: ");
        fgets(produtos[i].descricao,50,stdin);
        produtos[i].descricao[strcspn(produtos[i].descricao, "\n")] = '\0';

        printf("Informe o preço de compra do produto: ");
        scanf("%f", &produtos[i].preco_compra);
    
        printf("Informe o preço de venda do produto: ");
        scanf("%f", &produtos[i].preco_venda);

        printf("Informe a quantidade em estoque do produto: ");
        scanf("%d", &produtos[i].qtd_em_estoque);
    
        printf("Informe a quantidade mínima de estoque do produto: ");
        scanf("%d", &produtos[i].estoque_minimo);

        printf("\n");
    }
}

void verifica_estoque_baixo(cadastros produtos[TAMANHO], int produtos_estoque_baixo[40], int *x){
    for(int i = 0; i < TAMANHO; i++){
        if(produtos[i].qtd_em_estoque < produtos[i].estoque_minimo){
            produtos_estoque_baixo[(*x)] = produtos[i].codigo;
            (*x)++;
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    cadastros produtos[TAMANHO];
    int produtos_estoque_baixo[40], x = 0;

    cadastro_produtos(produtos);

    verifica_estoque_baixo(produtos, produtos_estoque_baixo, &x);

    for(int i = 0; i < TAMANHO; i++){
        printf("\nCódigo do produto: %d\n", produtos[i].codigo);
        printf("Descrição do produto: %s\n", produtos[i].descricao);
        printf("Preço de compra do produto: %.2f\n", produtos[i].preco_compra);
        printf("Preço de venda do produto: %.2f\n", produtos[i].preco_venda);
        printf("Quantidade em estoque do produto: %d\n", produtos[i].qtd_em_estoque);
        printf("Quantidade mínima de estoque do produto: %d\n", produtos[i].estoque_minimo);
    }

    if(x != 0){
        printf("\nCódigo dos produtos que estão abaixo do estoque mínimo: \n");

        for(int i = 0; i < x; i++){
            printf("%d\n", produtos_estoque_baixo[i]);
        }
        printf("\n");
    }
}
