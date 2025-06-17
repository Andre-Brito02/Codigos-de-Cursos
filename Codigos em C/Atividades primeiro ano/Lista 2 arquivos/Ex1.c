/*1. Faça um programa que receba do usuário um arquivo texto e um caracter. Mostre na
tela quantas vezes aquele caractere ocorre dentro do arquivo.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    char caractere = ' ';
    int contador = 0;
    char c;

    arquivo = fopen("arquivomuitoimportante.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    while((c = fgetc(arquivo)) != EOF){
        if(caractere == c){
            contador++;
        }
    }

    fclose(arquivo);

    printf("Caractere %c apareceu %d vezes\n", caractere, contador);
}
