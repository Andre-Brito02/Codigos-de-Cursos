/*6. Implemente uma função que calcule a área da superfície e o volume de uma esfera de
raio R. O resultado deve ser mostrado no programa principal. Além disso, a função deve
obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume)
A área da superfície e o volume são dados, respectivamente, por:  ̃
A = 4 ∗ pi ∗ R2
V = 4/3 ∗ pi ∗ R3*/
#include <stdio.h>
#include <math.h>
#define PI 3.14

void calc_esfera(float raio, float *area, float *volume){
    *area = 4 * PI * (pow(raio,2));
    *volume = (4 * PI * (pow(raio,3)))/3;
}

int main(){
    float raio;
    float area, volume;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Valor da area: %.2f\n", area);
    printf("Valor da volume: %.2f\n", volume);
}