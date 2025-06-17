#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int cedulas, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;

    printf("Informe a quantidade de cedulas que possui: ");
    scanf("%d", &cedulas);
    
    notas_100 = cedulas / 100;
    cedulas = cedulas % 100;
    
    notas_50 = cedulas / 50;
    cedulas = cedulas % 50;
    
    notas_20 = cedulas / 20;
    cedulas = cedulas % 20;
    
    notas_10 = cedulas / 10;
    cedulas = cedulas % 10;
    
    notas_5 = cedulas / 5;
    cedulas = cedulas % 5;
    
    notas_2 = cedulas / 2;
    
    notas_1 = cedulas % 2;
    
    printf("%d nota(s) de R$ 100,00\n", notas_100);
    printf("%d nota(s) de R$ 50,00\n", notas_50);
    printf("%d nota(s) de R$ 20,00\n", notas_20);
    printf("%d nota(s) de R$ 10,00\n", notas_10);
    printf("%d nota(s) de R$ 5,00\n", notas_5);
    printf("%d nota(s) de R$ 2,00\n", notas_2);
    printf("%d nota(s) de R$ 1,00\n", notas_1);
    
    system("pause");
    
}
