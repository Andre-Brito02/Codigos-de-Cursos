/*Implemente um programa que leia o nome de 5 pessoas e mostre os nomes
armazenados. Utilize vetores.*/
#include <stdio.h>
#include <string.h>

int main(){
    char nomes[5][50];
    
    for(int i = 0; i < 5; i++){
        printf("Informe um nome: ");
        gets(nomes[i]);
    }
    printf("\n");
    printf("Nomes informados: \n");

    for(int i = 0; i < 5; i++){
        printf("%s\n", nomes[i]);
    }
}