#include <stdio.h>
#include <stdlib.h>

int main(){
    int escolha;

    printf("Eh mamifero? ");
    scanf("%d", &escolha);

    if(escolha == 1){
        printf("Eh quadrupede? ");
        scanf("%d", &escolha);

        if(escolha == 1){
            printf("Eh carnivoro? ");
            scanf("%d", &escolha);

            if(escolha == 1){
                printf("O animal escolhido foi o leao\n");
            }else{
                printf("Eh herbivoro? ");
                scanf("%d", &escolha);

                if(escolha == 1)
                    printf("O animal escolhido foi o cavalo\n");
            }
        }else{
            printf("Eh Bipede? ");
            scanf("%d", &escolha);

            if(escolha == 1){
                printf("Eh onivoro? ");
                scanf("%d", &escolha);

                if(escolha == 1){
                    printf("O animal escolhido foi homem\n");
                }else{
                    printf("Eh frutifero? ");
                    scanf("%d", &escolha);

                    if(escolha == 1)
                        printf("O animal escolhido foi macaco\n");
                }
            }else{
                printf("Eh voador? ");
                scanf("%d", &escolha);

                if(escolha == 1){
                    printf("O animal escolhido foi morcego\n");
                }else{
                    printf("Eh aquatico? ");
                    scanf("%d", &escolha);

                    if(escolha == 1)
                        printf("O animal escolhido foi baleia\n");
                }
            }
        }    
    }else{
        printf("Eh uma ave? ");
        scanf("%d", &escolha);

        if(escolha == 1){
            printf("Eh uma ave nao voadora? ");
            scanf("%d", &escolha);

            if(escolha == 1){
                printf("Eh uma ave tropical? ");
                scanf("%d", &escolha);

                if(escolha == 1){
                    printf("O animal escolhido foi o avestruz\n");
                }else{
                    printf("Eh uma ave polar? ");
                    scanf("%d", &escolha);

                    if(escolha == 1)
                        printf("O animal escolhido foi o pinguim\n");
                }
            }else{
                printf("Eh uma ave nadadora? ");
                scanf("%d", &escolha);

                if(escolha == 1){
                    printf("O animal escolhido foi o pato\n");
                }else{
                    printf("Eh uma ave de rapina? ");
                    scanf("%d", &escolha);

                    if(escolha == 1)
                        printf("O animal escolhido foi a aguia\n");
                }
            }        
        }else{
            printf("Eh um reptil? ");
            scanf("%d", &escolha);

            if(escolha == 1){
                printf("Eh um reptil com casco? ");
                scanf("%d", &escolha);

                if(escolha == 1){
                    printf("O animal escolhido foi a tartaruga\n");
                }else{
                    printf("Eh um reptil carnivoro? ");
                    scanf("%d", &escolha);

                    if(escolha == 1){
                        printf("O animal escolhido foi o crocodilo\n");
                    }else{
                        printf("Eh um reptil sem patas? ");
                        scanf("%d", &escolha);

                        if(escolha == 1)
                            printf("O animal escolhido foi a cobra\n");
                    }
                }
            }
        }
    }
    
    system("pause");
}//main
