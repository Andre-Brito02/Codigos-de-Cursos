/*3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/
#include <stdio.h>

int main(){
    int x, y, *pont_x, *pont_y;

    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Digite um valor: ");
    scanf("%d", &y);

    pont_x = &x;
    pont_y = &y;

    if(&x > &y){
        printf("%d\n", *pont_x);
    }

    else{
        printf("%d\n", *pont_y);
    }
}
