/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de
objetos. O vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor
total de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um
vetor; a quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma
posição. Crie um programa que receba os preços e as quantidades vendidas,
armazenando-os em seus respectivos vetores (ambos com tamanho dez). Depois,
determine e mostre:
● um relatório contendo: quantidade vendida, valor unitário e valor total de cada
objeto. Ao final, deverão ser mostrados o valor geral das vendas e o valor da
comissão que será paga ao vendedor; e
● O valor do objeto mais vendido e sua posição no vetor (não se preocupe com
empates).*/
#include <stdio.h>

int main(){
    float salario = 545.00;
    float valor_a_ser_acrescentado = 0, valor_total_vendas = 0, valor_obj_mais_vendido = 0;
    int posicao = 0;
    float precos[10];
    int quantidade[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o preco do produto %d: ", i+1);
        scanf("%f", &precos[i]);
        
        printf("Informe a quantidade vendida do produto %d: ", i+1);
        scanf("%d", &quantidade[i]);     

        if(precos[i] > valor_obj_mais_vendido){
            posicao = i;
            valor_obj_mais_vendido = precos[i];
        }

        float valor_por_vendas = precos[i] * quantidade[i] * 0.05;

        valor_total_vendas += precos[i] * quantidade[i];
        valor_a_ser_acrescentado += valor_por_vendas;   
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("Produto %2d: quantidade: %2d| valor unitario: %.2f| valor: %5.2f|\n", i+1, quantidade[i], precos[i]/quantidade[i], precos[i]);
    }

    printf("\n");
    printf("Valor geral das vendas: %.2f\n", valor_total_vendas);
    printf("Valor da comissao a ser paga: %.2f\n", valor_a_ser_acrescentado);
    printf("O valor do produto mais vendido foi: %.2f e esta armazenado na posicao %d\n", precos[posicao], posicao);
}