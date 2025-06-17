/*4. Faça um programa que receba o nome de um arquivo de entrada e outro de saída.
O arquivo de entrada contém em cada linha o nome de uma cidade (ocupando 40
caracteres) e o seu número de habitantes. O programa deverá ler o arquivo de
entrada e gerar um arquivo de saída onde aparece o nome da cidade mais populosa
seguida pelo seu número de habitantes.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq_entrada, *arq_saida;
    char cidade[40], maior_cidade[40];
    int habitantes, maior_habitantes = 0;

    arq_entrada = fopen("cidades_habitantes.txt", "w+");

    if(arq_entrada == NULL){
        printf("Erro ao abrir um arquivo.\n");
        return 1;
    }

    for(int i = 0; i < 3; i++){
        printf("Digite o nome de uma cidade: ");
        fgets(cidade, 40, stdin);
        cidade[strcspn(cidade,"\n")] = '\0';

        for(int j = 0; j < strlen(cidade); j++){
            fputc(cidade[j], arq_entrada);
        }

        fputc(' ', arq_entrada);

        printf("Digite a quantidade de habitantes da cidade: ");
        scanf("%d", &habitantes);
        setbuf(stdin, NULL);

        fprintf(arq_entrada, "%d", habitantes);

        fputc('\n', arq_entrada);
    }

    fseek(arq_entrada, 0, SEEK_SET);

    arq_saida = fopen("maior_cidade_habitante.txt", "w");

    if(arq_saida == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(fscanf(arq_entrada, "%s %d", cidade, &habitantes) != EOF){
        if(habitantes > maior_habitantes){
            maior_habitantes = habitantes;
            strcpy(maior_cidade,cidade);
        }
    }    
    
    fprintf(arq_saida, "%s %d\n", maior_cidade, maior_habitantes);

    fclose(arq_entrada);
    fclose(arq_saida);
}//main
