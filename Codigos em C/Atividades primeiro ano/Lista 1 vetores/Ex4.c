/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros.
Calcule e mostre:
● todos os números pares;
● a quantidade de números pares;
● todos os números ímpares;
● a quantidade de números ímpares.*/
#include <stdio.h>

int main(){
    int valores[6];
    int qtd_par = 0, qtd_impar = 0;
    int vetor_par[6];
    int vetor_impar[6];

    for(int i = 0; i < 6; i++){
        printf("Informe um valor: ");
        scanf("%d", &valores[i]);

        if(valores[i] %2 == 0){
            vetor_par[i] = valores[i];
            qtd_par++;
        }else{
            vetor_impar[i] = valores[i];
            qtd_impar++;  
        } 
    }
    printf("\n");

    for(int i = 0; i < 6; i++){
        if(valores[i] %2 == 0){
            printf("Valor par = %d\n", vetor_par[i]);
        }
    }

    printf("Quantidade de numeros pares = %d\n", qtd_par);
    printf("\n");

    for(int i = 0; i < 6; i++){
        if(valores[i] %2 != 0){
            printf("Valor impar = %d\n", vetor_impar[i]);
        }
    }
    
    printf("Quantidade de numeros impares = %d\n", qtd_impar);
}