/*7. Escreva uma sub-rotina medidas_retangulo, com o protótipo abaixo, que: recebe dois
parâmetros com as medidas dos lados de um retângulo; calcula a área e o perímetro deste
retângulo; altera os conteúdos dos parâmetros com os valores da área e do perímetro
calculados
void medidas_retangulo(double*var1,double*var2);*/
#include <stdio.h>

void medidas_retangulos(double *var1, double *var2){
    double area = *var1 * *var2;
    double perimetro = 2 * (*var1 * *var2);

    *var1 = area;
    *var2 = perimetro;
}

int main(){
    double var1, var2;

    printf("Digite o valor do lado de um retangulo: ");
    scanf("%lf", &var1);

    printf("Digite o valor do lado de um retangulo: ");
    scanf("%lf", &var2);

    medidas_retangulos(&var1, &var2);

    printf("Valor da area = %.2lf\n", var1);
    printf("Valor do perimetro = %.2lf\n", var2);
}