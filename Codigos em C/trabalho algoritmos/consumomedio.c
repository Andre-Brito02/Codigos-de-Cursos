#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int km_total;
    float litros_total, consumo_medio;
    
    printf("Informe a distancia percorrida: ");
    scanf("%d", &km_total);
    
    printf("Informe a quantidade de litros total gasta: ");
    scanf("%f", &litros_total);
    
    consumo_medio = km_total / litros_total;
    
    printf("Consumo medio = %.1f km/l\n", consumo_medio);
    
    system("pause");
    
}
