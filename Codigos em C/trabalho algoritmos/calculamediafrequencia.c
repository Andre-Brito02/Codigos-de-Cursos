#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, media;
    int frequencia;

    printf("Informe a nota 1 do aluno: ");
    scanf("%f", &nota1);

    printf("Informe a nota 2 do aluno: ");
    scanf("%f", &nota2);
    
    printf("Informe a frequencia do aluno: ");
    scanf("%d", &frequencia);

    media = (nota1 + nota2) / 2;

    if(media >= 7.0 && frequencia >= 75){
        printf("O aluno esta Aprovado\n");
    }else{
        printf("O aluno esta Reprovado\n");
    }

    system("pause");
}