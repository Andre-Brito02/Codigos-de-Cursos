#include <stdio.h>
#include <stdlib.h>

int main(){
    float temp_c, temp_f;
    
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &temp_c);
    
    temp_f = (1.8 * temp_c) + 32;
    
    printf("Temperatura em Fahrenheit: %f\n", temp_f);   
    system("pause");
}
