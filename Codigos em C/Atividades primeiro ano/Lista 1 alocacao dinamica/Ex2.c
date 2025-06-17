/*2. Média de Notas. Solicite ao usuário que insira a quantidade de notas que deseja calcular
a média. Aloque dinamicamente memória para armazenar as notas. Peça ao usuário para
inserir as notas. Calcule e exiba a média das notas.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int qtd_notas;
    double *notas, media = 0;

    printf("Digite a quantidade de notas que deseja receber: ");
    scanf("%d", &qtd_notas);

    notas = (double*) malloc(qtd_notas*sizeof(double));

    for(int i = 0; i < qtd_notas; i++){
        printf("Digite a %d° nota: ", i+1);
        scanf("%lf", &notas[i]);
        media += notas[i];
    }

    printf("A média do(a) aluno(a) é: %.2lf\n", media / qtd_notas);

    free(notas);
}