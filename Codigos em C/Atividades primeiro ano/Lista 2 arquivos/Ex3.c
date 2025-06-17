/*3. Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo
com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do
conteúdo do segundo).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq1, *arq2, *arq3;
    char primeira_frase[100];
    char segunda_frase[100];

    arq1 = fopen("primeiroarquivo.txt", "w");

    if(arq1 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite uma frase: ");
    fgets(primeira_frase, 100, stdin);
    primeira_frase[strcspn(primeira_frase, "\n")] = '\0';

    for(int i = 0; i < strlen(primeira_frase); i++){
        fputc(primeira_frase[i], arq1);
    }

    arq2 = fopen("segundoarquivo.txt", "w");

    if(arq2 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite uma frase: ");
    fgets(segunda_frase, 100, stdin);
    segunda_frase[strcspn(segunda_frase, "\n")] = '\0';

    for(int i = 0; i < strlen(segunda_frase); i++){
        fputc(segunda_frase[i], arq2);
    }

    arq3 = fopen("terceiroarquivo.txt", "w");

    if(arq3 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for(int i = 0; i < strlen(primeira_frase); i++){
        fputc(primeira_frase[i], arq3);
    }

    fputc(' ', arq3);

    for(int j = 0; j < strlen(segunda_frase); j++){
        fputc(segunda_frase[j], arq3);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
}
