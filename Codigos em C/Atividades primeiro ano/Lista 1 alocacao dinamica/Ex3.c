/*3. Cópia de Strings. Peça ao usuário para inserir uma string. Aloque dinamicamente
memória para armazenar essa string. Crie uma segunda string dinâmica e copie a primeira
para a segunda. Exiba a string original e a cópia.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int tamanho;
    char *frase, *copia;

    printf("Digite o tamanho da frase: ");
    scanf("%d", &tamanho);
    setbuf(stdin ,NULL);

    frase = (char*) malloc(tamanho*sizeof(char));
    copia = (char*) malloc(tamanho*sizeof(char));

    printf("Digite uma frase: ");
    fgets(frase, tamanho, stdin);
    frase[strcspn(frase, "\n")] = '\0';

    strcpy(copia, frase);
    
    printf("Frase original: %s\n", frase);
    printf("Cópia da frase: %s\n", copia);

    free(frase);
    free(copia);
}