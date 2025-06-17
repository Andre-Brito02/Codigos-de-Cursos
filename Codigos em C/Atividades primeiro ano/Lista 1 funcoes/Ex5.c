/*Crie um programa que carregue (em uma sub-rotina) uma matriz 3X4 com números
reais. Utilize uma outra função para copiar todos os valores da matriz para um vetor
de 12 posições. Esse vetor deverá ser mostrado no programa principal.*/
#include <stdio.h>

void preencheVetor(float matriz[][4], int l, int c, float vetor[], int tam){
    int x = 0;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            vetor[x] = matriz[i][j];
            x++;
        }

    }

}

void recebeMatriz(float matriz[][4], int l, int c, float vetor[], int tam){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("Digite um valor: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    preencheVetor(matriz, l,c,vetor, tam);
}

void main(){
    int l = 3, c = 4, tam = 12;
    float matriz[l][c], vetor[tam];   

    recebeMatriz(matriz, l,c, vetor, tam);

    for(int i = 0; i < tam; i++){
        printf("%.1f ", vetor[i]);
    }

    printf("\n");
}
