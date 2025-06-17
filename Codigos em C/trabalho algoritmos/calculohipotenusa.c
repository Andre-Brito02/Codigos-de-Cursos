#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int cateto_oposto, cateto_adjacente;
    float hipotenusa;
    
    printf("Informe o valor do cateto oposto: ");
    scanf("%d", &cateto_oposto);
    
    printf("Informe o valor do cateto adjacente: ");
    scanf("%d", &cateto_adjacente);

    hipotenusa = sqrt(pow(cateto_oposto,2) + pow(cateto_adjacente,2));
    
    printf("Hipotenusa = %.2f\n", hipotenusa);

    system("pause");
    
}
