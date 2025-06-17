#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a, b, c, delta, raiz1, raiz2;

    printf("Informe o valor do coeficiente a: ");
    scanf("%f", &a);
    printf("Informe o valor do coeficiente b: ");
    scanf("%f", &b);
    printf("Informe o valor do coeficiente c: ");
    scanf("%f", &c);

    delta = pow(b,2) - 4 * a * c;

    if(delta > 0){
        raiz1 = (-b + sqrt(delta)) / 2 * a;  
        raiz2 = (-b - sqrt(delta)) / 2 * a;  

        printf("Raizes da equacao = %.2f e %.2f\n", raiz1, raiz2);
    }

    else if(delta == 0){
        raiz1 = raiz2 = (-b + sqrt(delta)) / 2 * a;

        printf("Raizes da equacao = %.2f e %.2f\n", raiz1, raiz2);
    }

    else{
        printf("Essa equacao nao possui raizes reais\n");
    }

    system("pause");
}