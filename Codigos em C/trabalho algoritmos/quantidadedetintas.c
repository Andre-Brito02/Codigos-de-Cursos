#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){
    float area_cilindro, raio_cilindro, altura_cilindro, litros_totais, total_latas, custo_total;
    
    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio_cilindro);
    
    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura_cilindro);
    
    area_cilindro = PI * pow(raio_cilindro,2) + 2 * PI * raio_cilindro * altura_cilindro;
    
    total_latas = area_cilindro/ 15;
    
    custo_total = total_latas * 50;
    
    printf("Area do cilindro: %.2f\n", area_cilindro);
    printf("Quantidade de latas usadas: %.2f\n", total_latas);
    printf("Valor total das latas: R$%.2f\n", custo_total);
    system("pause");
    
}
