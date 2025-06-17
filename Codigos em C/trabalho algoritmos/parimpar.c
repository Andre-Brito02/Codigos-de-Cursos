#include <stdio.h>
#include <stdlib.h>

int main(){
    int escolhaMaria, escolhaJoao;

    printf("Informe a escolha de Maria: ");
    scanf("%d", &escolhaMaria);

    printf("Informe a escolha de Joao: ");
    scanf("%d", &escolhaJoao);
    
    if(escolhaMaria <= 0 || escolhaMaria > 10 || escolhaJoao <= 0 || escolhaJoao > 10){
        printf("Informe um valor valido na proxima vez!!\n");
    }else{
        if((escolhaJoao + escolhaMaria) %2 == 0){
            printf("Par\n");
        }else{
            printf("Impar\n");
        }
    }

    system("pause");
}