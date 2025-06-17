/*Crie um programa que receba os valores antigo e atual de um produto. Chame uma
sub-rotina que determine o percentual de acréscimo entre esses valores. O
resultado deverá ser mostrado no programa principal. Utilize passagem por
referência.*/
#include <stdio.h>

void calculaPercentual(float valor_antigo, float valor_atual, int *percentual_acrescimo){
    *percentual_acrescimo = ((valor_atual - valor_antigo) / valor_antigo) * 100;
}

void main(){
    float valor_antigo, valor_atual;
    int percentual_acrescimo;
    char porcentagem = 37;

    printf("Digite o valor antigo de um produto: ");
    scanf("%f", &valor_antigo);
    
    printf("Digite o valor atual desse produto: ");
    scanf("%f", &valor_atual);

    calculaPercentual(valor_antigo, valor_atual, &percentual_acrescimo);

    printf("O percentual de acrescimo foi de %d%c\n", percentual_acrescimo, porcentagem);
}
