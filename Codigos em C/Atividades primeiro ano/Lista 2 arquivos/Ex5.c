/*5. Faça um programa que receba como entrada o ano corrente e o nome de dois
arquivos: um de entrada e outro de saída. Cada linha do arquivo de entrada contém
o nome de uma pessoa (ocupando 40 caracteres) e o seu ano de nascimento. O
programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde aparece
o nome da pessoa seguida por uma string que representa a sua idade.
• Se a idade for menor do que 18 anos, escreva “menor de idade”
• Se a idade for maior do que 18 anos, escreva “maior de idade”
• Se a idade for igual a 18 anos, escreva “entrando na maior idade”*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *dados, *relatorio_idades;
    int ano_atual = 2023;
    int ano_nascimento;
    char nome[40];

    dados = fopen("nome_idade.txt", "w+");

    if(dados == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    for(int i = 0; i < 3; i++){
        printf("Digite o nome de uma pessoa: ");
        fgets(nome, 40, stdin);
        nome[strcspn(nome, "\n")] = '\0';

        for(int j = 0; j < strlen(nome); j++){
            fputc(nome[j], dados);
        }

        fputc(' ', dados);

        printf("Digite o ano de nascimento da pessoa: ");
        scanf("%d", &ano_nascimento);
        setbuf(stdin, NULL);

        fprintf(dados, "%d", ano_nascimento);

        fputc('\n', dados);
    }
    //retorna ao inicio do arquivo para leitura
    fseek(dados, 0, SEEK_SET);

    relatorio_idades = fopen("Maior_menor_idade.txt", "w");

    if(relatorio_idades == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    while(fscanf(dados, "%s %d", nome, &ano_nascimento) != EOF){    
        for(int i = 0; i < strlen(nome); i++){
            fputc(nome[i], relatorio_idades);
        }

        fputc(' ', relatorio_idades);

        if((ano_atual - ano_nascimento) > 18){
            fputs("Maior de idade\n", relatorio_idades);
        }

        else if((ano_atual - ano_nascimento) == 18){
            fputs("Entrando na maior idade\n", relatorio_idades);
        }

        else{
            fputs("Menor de idade\n", relatorio_idades);
        }
    }

    fclose(dados);
    fclose(relatorio_idades);
}
