/*3. Um vendedor recebe um salário fixo mais 6% de comissão sobre suas vendas. Crie
um algoritmo que tenha um registro de vendedor, com o salário fixo, valor total de
suas vendas, comissão e o salário final. Crie uma sub-rotina que receba um
vendedor como parâmetro (por valor ou por referência). Na subrotina, peça ao
usuário para digitar o valor do salário fixo, o valor total de vendas e calcule (na
mesma subrotina) a comissão e o salário final. Na função principal, mostre todas as
informações. Faça isso para dois funcionários diferentes.*/
#include <stdio.h>

typedef struct{
    float salario_fixo;
    float valor_total_vendas;
    float comissao;
    float salario_final;
}vendedor;

vendedor dados[2];

void calcula_salario_v1(vendedor dados_v1[2]){
    for(int i = 0; i < 2;i++){
        printf("Digite o salario fixo: ");
        scanf("%f", &dados_v1[i].salario_fixo);

        printf("Digite o total de vendas: ");
        scanf("%f", &dados_v1[i].valor_total_vendas);

        dados_v1[i].comissao = dados_v1[i].valor_total_vendas * 0.06;

        dados_v1[i].salario_final = dados_v1[i].salario_fixo + dados_v1[i].comissao;  
    }     
}       

int main(){
    vendedor dados_v1[2];
    calcula_salario_v1(dados_v1);

    for(int i = 0; i < 2; i++){
        printf("\nSalario fixo do vendedor = R$ %.2f\n", dados_v1[i].salario_fixo);
        printf("Valor total de vendas do vendedor = R$ %.2f\n", dados_v1[i].valor_total_vendas);
        printf("Comissao do vendedor = R$ %.2f\n", dados_v1[i].comissao);
        printf("Salario final do vendedor = R$ %.2f\n", dados_v1[i].salario_final);
    }
    
}