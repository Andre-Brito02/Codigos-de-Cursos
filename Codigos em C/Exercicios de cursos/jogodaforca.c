#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAMANHO_PALAVRA 20

//variaveis globais
char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;

//criar uma funcao para mostrar o cabecalho de uma forma mais facil
void abertura(){
    printf("|-----------------|\n");
    printf("|  Jogo de forca  |\n");
    printf("|-----------------|\n");        
}//abertura

void chuta(){
    //capturar um novo chute
    char chute;
    printf("Qual letra: ");
    scanf(" %c", &chute);

    chutes[chutesdados] = chute;
    chutesdados++;
}//chuta

int jachutou(char letra){
    int achou = 0;
    //uma determinada letra ja foi chutada?
    for(int j = 0; j < chutesdados; j++){
        if(chutes[j] == letra){
            achou = 1;
            break;
        }//if
    }//for j
    return achou;
}//jachutou

void desenhaforca(){
    //imprime a palavra secreta
    for(int i = 0; i < strlen(palavrasecreta); i++){
        int achou = jachutou(palavrasecreta[i]);

        if(achou){
            printf("%c ", palavrasecreta[i]);
        }else{
            printf("_ ");
        }//else
    }//for i
    printf("\n");
}//desenhaforca

void adicionapalavra(){
    char quer;
    printf("Voce deseja adicionar uma nova palavra no jogo? (S/N)");
    scanf(" %c", &quer);

    if(quer == 'S'){
        char novapalavra[TAMANHO_PALAVRA];
        printf("Qual a nova palavra? ");
        scanf("%s", &novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+");

        if(f == 0){
            printf("Desculpe, banco de dados nao disponivel\n");
            exit(1);
        }    

        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;

        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qtd);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novapalavra);

        fclose(f);  
    }
}

void escolhepalavra(){
    FILE* f;   
    f = fopen("palavras.txt", "r");

    if(f == 0){
        printf("Desculpe, banco de dados nao disponivel\n");
        exit(1);
    }

    int qttdepalavras;
    fscanf(f, "%d", &qttdepalavras);

    srand(time(0));
    int randomico = rand() % qttdepalavras;

    for (int i = 0; i <= randomico; i++){
        fscanf(f, "%s", palavrasecreta);
    }//for

    fclose(f);
}//escolhepalavra

int acertou(){
    for(int i = 0; i < strlen(palavrasecreta); i++){
        if(!jachutou(palavrasecreta[i])){
            return 0;
        }
    }
    return 1;
}//acertou

int enforcou(){
    int erros = 0;
    for(int i = 0; i < chutesdados; i++){
        int existe = 0;
        for(int j = 0; j < strlen(palavrasecreta); j++){
            if(chutes[i] == palavrasecreta[j]){
                existe = 1;
                break;
            }//if
        }//for j
        if(!existe) erros++;
    }//for i
    return erros >= 5;
}//enforcou

int main(){

    escolhepalavra();

    //imprimir o cabecalho do jogo
    abertura();
    do{
        desenhaforca();
        chuta();

    }while (!acertou() && !enforcou());
    
    printf("\n");

    if(acertou()){
        printf("Meus Parabens! Voce arrasou!\n");
    }else{
        printf("Infelizmente voce perdeu! Tente novamente\n");
        printf("A palavra era *** %s ***\n", palavrasecreta);
    }

    printf("\n");
    
    adicionapalavra();
}//main