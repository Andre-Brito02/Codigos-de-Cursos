/*1. Crie uma subrotina que preencha um vetor com números inteiros aleatórios (utilize a
função rand() ). Após o preenchimento, solicite um número qualquer ao usuário.
Invoque outra subrotina, passando o vetor e o número digitado pelo usuário como
parâmetros, e verifique se o número digitado pelo usuário está presente no vetor. Na
função principal, informe ao usuário se o número está presente no vetor ou não.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_vetor(int vetor[10]){
    //necessario para mudar o numero random
    int segundos = time(0);
    srand(segundos);

    for(int i = 0; i < 10; i++){
        int numerogrande = rand() % 100; 
        vetor[i] = numerogrande;
    }
}

int verifica_numero(int vetor[10], int num){
    int qtd = 0;
    for(int i = 0; i < 10; i++){
        if(num == vetor[i]){
            qtd++;
        }
    }
    return qtd;
}


int main(){
    int vetor[10];
    int num, qtd;

    preenche_vetor(vetor);

    printf("Digite um numero: ");
    scanf("%d", &num);

    qtd = verifica_numero(vetor, num);

    if(qtd > 0){
        printf("O numero %d apareceu %d vezes\n", num, qtd);
    }else{
        printf("O numero %d nao esta presente no vetor\n", num);
    }
}