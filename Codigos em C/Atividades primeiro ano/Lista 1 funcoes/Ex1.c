/*Elabore um programa contendo uma sub-rotina que receba as três notas de um
aluno como parâmetros e uma letra. Se a letra for A, a sub-rotina deverá calcular a
média aritmética das notas do aluno; se for P, deverá calcular a média ponderada,
com pesos 5, 3 e 2. A média calculada deverá ser mostrada no programa principal.
Utilize passagem por referência.*/
#include <stdio.h>

void calculaMedia(float n1, float n2, float n3, char escolha, float *media){
    if(escolha == 'A' || escolha == 'a'){
        *media = (n1 + n2 + n3) / 3;
    }

    else if(escolha == 'P' || escolha == 'p'){
        *media = (n1*5 + n2*3 + n3*2) / 10;
    }

    else{
        printf("Escolha Incorreta, tente novamente!");
    }
}

void main(){
    float n1, n2, n3, media;
    char escolha;

    printf("Digite as notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("A - Media aritmetica\nP - Media ponderada\nEscolha a operacao desejada: ");
    scanf(" %c", &escolha);
    setbuf(stdin, NULL);

    calculaMedia(n1, n2, n3, escolha, &media);
    
    if(escolha == 'A' || escolha == 'a'){
        printf("A media aritmetica do aluno eh: %.2f\n", media);
    }

    else if(escolha == 'P' || escolha == 'p'){
        printf("A media ponderada do aluno eh: %.2f\n", media);
    }
}