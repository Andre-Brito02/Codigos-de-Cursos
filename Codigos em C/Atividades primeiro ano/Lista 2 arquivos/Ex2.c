/*2. Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto
contendo o texto do arquivo de entrada, mas com as vogais substitu ́ıdas por ‘*’.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq1;
    FILE *arq2;
    char texto[100];
    char c;

    arq1 = fopen("msgusuario.txt", "w");

    if(arq1 == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    } 

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for(int i = 0; i < strlen(texto); i++){
        fputc(texto[i], arq1);
    }

    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
            texto[i] = '*';
        }
    }    
    
    fclose(arq1);
    
    arq2 = fopen("arquivocopiado.txt", "w");
    
    for(int i = 0; i < strlen(texto); i++){
        fputc(texto[i], arq2);
    }

    fclose(arq2);
}
