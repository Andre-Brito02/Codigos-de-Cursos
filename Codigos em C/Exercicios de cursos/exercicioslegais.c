#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void menuDeOpcoes(){
    printf("Menu de opcoes: \n");
    printf("a - IMC\n");
    printf("b - Natacao\n");
}

void calculaIMC(float* pesoKG, float* alturaM, float* altura2, float* imc){
    //pedir ao usuario digitar os dados
        printf("Informe seu peso em KG: ");
        scanf("%f", &(*pesoKG));
        printf("Informe sua altura em M: ");
        scanf("%f", &(*alturaM));

        //calcular a altura ao quadrado
        *altura2 = pow((*alturaM), 2);

        //calcular o imc
        *imc = *pesoKG / *altura2;
        printf("\n");

        //verificar qual o nivel do imc usando if else
        if(*imc < 18.5){
            printf("Abaixo do peso e imc = %.2f\n", *imc);
        }

        else if(*imc >= 18.5 && *imc < 25){
            printf("Peso normal e imc = %.2f\n", *imc);
        }

        else{
            printf("Acima do peso e imc = %.2f\n", *imc);
        }
}

void verificaIdade(int* idade){
    //pedir ao usuario informar uma idade
        printf("Informe uma idade: ");
        scanf("%d", &(*idade));
        printf("\n");

        //verificar em qual categoria essa idade esta usando if else
        if(*idade >= 5 && *idade <= 7){
            printf("Infantil - A\n");
        }

        else if(*idade >= 8 && *idade <= 10){
            printf("Infantil - B\n");
        }

        else if(*idade >= 11 && *idade <= 13){
            printf("Juvenil - A\n");
        }

        else if(*idade >= 14 && *idade <= 17){
            printf("Juvenil - B\n");
        }

        else{
            printf("Adulto\n");
        }
}

int main(){
    menuDeOpcoes();

    //criar as variaveis para peso, altura e imc
    float pesoKG;
    float alturaM;
    float altura2;
    float imc;

    //criar a variavel para idade
    int idade;
    
    //criar a variavel que vai escolher a opcao desejada
    char escolha;
    
    //pedir ao usuario fazer sua escolha
    printf("Por favor digite a opcao desejada: ");
    scanf(" %c", &escolha);
    printf("\n");

    //verificar a escolha dele usando switch
    switch (escolha){
    //imc    
    case 'a':
    case 'A':
        //chama a funcao que calcula o imc
        calculaIMC(&pesoKG, &alturaM, &altura2, &imc);
        break;

    //natacao
    case 'b':
    case 'B':
        //chama a funcao que verifica a idade do atleta de natacao
        verificaIdade(&idade);
        break;

    default:
        break;
    }//switch

}//main

/*
struct Dados{
    char nome[50];
    int idade;
    char endereco[50];
};

int main(){
    struct Dados pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 50, stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    setbuf(stdin, NULL);

    printf("Digite seu endereco: ");
    fgets(pessoa.endereco, 50, stdin);
    pessoa.endereco[strcspn(pessoa.endereco, "\n")] = '\0';
    setbuf(stdin, NULL);
        
    printf("Seu nome eh: %s\n", pessoa.nome);
    printf("Sua idade eh: %d anos\n", pessoa.idade);
    printf("Seu endereco eh: %s\n", pessoa.endereco);
    printf("\n");
}
//while((getchar()) != '\n');LIMPAR BUFFER

void calculaSoma(int* numero, int* soma){
    for(int contador = 0; contador < 10; contador++){
        printf("Digite um numero: ");
        scanf("%d", &(*numero));

        *soma += (*numero);
    }
}

int main(){
    int soma = 0;
    int numero;

    calculaSoma(&numero, &soma);

    printf("Resultado da soma = %d\n", soma);
}

void calculaQuadrado(double* numero, double* numero2, int* verdade){
    while(verdade > 0){
    
        printf("Digite um numero: ");
        scanf("%lf", &(*numero));

        if(*numero <= 0){
            *verdade = 0;
            return;
        }//if

        *numero2 = pow(*numero, 2);
        printf("Numero %.lf ao quadrado = %.lf\n", *numero, *numero2);

        printf("\n");
    }
}

int main(){
    double numero;
    double numero2;
    int verdade = 1;

    calculaQuadrado(&numero, &numero2, &verdade);
    
}//main      

int main(){
    //criar as variaveis que receberao as notas
    float nota1;
    float nota2;

    //criar a variavel q recebera a media de cada aluno
    float medias;

    //criar a variavel q calculara a media de todos os alunos
    float media_total = 0;//comeca em 0 para somar o valor atual com o sucessor
    
    //criar um contador para rodar o laço uma quantidade de vezes
    int contador = 1;//comeca em 1 por estetica :)

    //rodar o laço de repeticao
    do{
    //pedir ao usuario digitar as notas, solicitando nova digitação se necessario
    printf("Digite a nota 1 do aluno %d: ", contador);
    scanf("%f", &nota1);
    if(nota1 < 0 || nota1 > 10){
        printf("Digite novamente a nota 1: ");
        scanf("%f", &nota1);
    }
        
    printf("Digite a nota 2 do aluno %d: ", contador);
    scanf("%f", &nota2);
    if(nota2 < 0 || nota2 > 10){
        printf("Digite novamente a nota 2: ");
        scanf("%f", &nota2);
    }
        
    printf("Nota 1 do aluno %d = %.2f\n", contador, nota1);//estética :)
    printf("Nota 2 do aluno %d = %.2f\n", contador, nota2);//estetica :)
    medias = (nota1 + nota2) / 2;
        
    printf("Media do aluno %d = %.2f\n", contador, medias);//estética :)
    media_total = media_total + medias;
    contador++;
    printf("\n");
        
    }while (contador < 6);

    media_total = media_total / 5;
    printf("Media total: %.2f\n", media_total);

    return 0;
}//main

void verificaIntervalo(int* numero, int verdade, int quantidade){
    while(verdade > 0){
        printf("Digite um numero: ");
        scanf("%d", &(*numero));

        quantidade++;

        if(*numero < 500 || *numero > 1000){
            verdade = 0;
            quantidade -= 1;
            printf("Quantidade de numeros validos digitados = %d\n", quantidade);
        }
    }
}

int main(){
    int numero;
    int verdade = 1;
    int quantidade = 0;

    verificaIntervalo(&numero, verdade, quantidade);
    
}//main

int main(){
    setlocale(LC_ALL, "Portuguese");
    //criar os vetores
    int vetorA[5];
    int vetorB[5];
    int vetor_soma[5];
    //criar a variavel do laço de repetição
    int i;
    //criar o laço de repetição
    for(i = 0; i < 5; i++){
        printf("Digite o número da posição %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
        printf("Digite o número da posição %d do vetor B: ", i);
        scanf("%d", &vetorB[i]);
        printf("\n");
            
        vetor_soma[i] = vetorA[i] + vetorB[i];
    }//for

    printf("\n");
    //exibir o vetor soma
    for (i = 0; i < 5; i++){
        printf("Vetor soma na posição %d é: %d\n", i, vetor_soma[i]);
    }//for
    return 0;
}

int main(){
    //criar o vetor
    int vetor[20];
    //criar as variaveis
    int maior_trinta = 0;
    int soma = 0;
    float media;
    int numeros_iguais = 0;
    int numeros_maiores = 0;
    int i = 0;

    for(i = 0; i < 20; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] == 30){
            maior_trinta = maior_trinta + 1;
        }
        soma = soma + vetor[i];
    }//for
    printf("\n");

    media = (soma / 20);
        
    for(i = 0; i < 20; i++){
        if(vetor[i] > media){
            numeros_maiores = numeros_maiores + 1;
        }
        if(vetor[i] == media){
            numeros_iguais = numeros_iguais + 1;
        }
    }//for

    printf("Numeros iguais a 30: %d\n", maior_trinta);
    printf("Media: %.2f\n", media);
    printf("Numeros iguais a media: %d\n", numeros_iguais);
    printf("Numeros maiores que a media: %d\n", numeros_maiores);

    return 0;
}//main

int main(){
    //criar a matriz de tamanho 5x5
    int matriz[5][5];
    //criar as variaveis dos laços de repetições
    int l;
    int c;
    //criar uma variavel que armazenara o maior numero digitado
    int numero = 0;
        
    //criar os laços de repetições para armazenar os valores da matriz
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            printf("Digite o numero da posicao [%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
            if(matriz[l][c] > numero){
                numero = matriz[l][c];
            }
        }//for c
    }//for l

    //exibir a matriz
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            printf("%4d", matriz[l][c]);
        }//for c
        printf("\n");
    }//for l

    //exibir o maior numero digitado na matriz
    printf("Maior numero: %d\n", numero);

    //exibir a posição do maior numero
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            if(numero == matriz[l][c]){
            printf("[%d][%d]\n", l+1, c+1);
            }//if
        }//for c
    }//for 

    return 0;
}//main


//criar a estrutura
struct Aluno{
    char nome[50];
    char curso[50];
    int notas;
    float media;
    char situacao[15];
};

int main(){
    struct Aluno info;//necessario para atribuir os valores da struct
    info.media = 0;

    //pedir ao usuario digitar o nome do aluno
    printf("Digite o nome do aluno: ");
    fgets(info.nome, 50, stdin);
    info.nome[strcspn(info.nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    //pedir ao usuario digitar o curso do aluno
    printf("Digite o curso do aluno: ");
    fgets(info.curso, 50, stdin);
    info.curso[strcspn(info.curso, "\n")] = '\0';
    setbuf(stdin, NULL);

    //laço de repetição para digitar as notas
    for(int i = 0; i < 4; i++){
        printf("Digite a nota do aluno: ");
        scanf("%d", &info.notas);
        info.media = info.media + info.notas;
    }//for
        
    //exibir nome e curso
    printf("Nome do aluno: %s\n", info.nome);
    printf("Curso do aluno: %s\n", info.curso);

    //exibir as notas
    for(int i = 0; i < 4; i++){
        printf("Notas: %d\n", info.notas);
    }

    //calcular a media
    info.media = info.media / 4;
    //exibir a media
    if(info.media >= 7){
        printf("Sua media eh: %.2f e sua situacao eh: Aprovado\n", info.media);
    }

    else if(info.media < 7 && info.media >= 3){
        printf("Sua media eh: %.2f e sua situacao eh: Exame\n", info.media);
    }

    else{
        printf("Sua media eh: %.2f e sua situacao eh: Reprovado\n", info.media);
    }

    return 0;
}//main

//chama a funcao que calcula a potencia, atribuindo os valores da funcao main para duas variaveis que serao usadas na funcao potencia
void potencia(double a, double b){
    //criar a variavel potencia e calcular seu valor usando as variaveis criadas na função cujo valores foram passados por parametros  
    double potencia = pow(a, b);
    //exibir o resultado
    printf("Resultado = %.lf\n", potencia);
}//potencia

int main(){
    //criar as variaveis que receberao os numeros
    double alfa;
    double beta;
    //pedir ao usuario digitar os numeros
    printf("Digite um numero: ");
    scanf("%lf", &alfa);
    printf("Digite um numero: ");
    scanf("%lf", &beta);
    //chama a funcao e passa os valores das variaveis para a funcao
    potencia(alfa, beta);
}//main

void calculaMedia(int nota1, int nota2, float* media){
    *media = ((nota1 * 4) + (nota2 * 6)) / 10;
    printf("Media do aluno: %.1f\n", *media);
}

void conceito(float media){
    if(media >= 0.0 && media <= 4.9){
        printf("Conceito D\n");
    }

    else if(media >= 5.0 && media <= 6.9){
        printf("Conceito C\n");
    }

    else if(media >= 7.0 && media <= 8.9){
        printf("Conceito B\n");
    }

    else{
        printf("Conceito A\n");
    }
}

int main(){
    int nota1;
    int nota2;
    float media;

    for(int i = 1; i <= 10; i++){
        printf("Digite a nota 1 do aluno %d: ", i);
        scanf("%d", &nota1);
        printf("Digite a nota 2 do aluno %d: ", i);
        scanf("%d", &nota2);

        calculaMedia(nota1, nota2, &media);

        conceito(media);
        printf("\n");
    }
}

Crie uma matriz identidade com dimensões 5 x 5;

int main(){
    int matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                matriz[i][j] = 1;
            }

            else if(i != j){
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

void apresentaOperacoes(){
    printf("Menu da calculadora: \n");
    printf("Soma:          +\n");
    printf("Subtracao:     -\n");
    printf("Multiplicacao: *\n");
    printf("Divisao:       /\n");
    printf("\n");
    printf("Caso queira sair aperte qualquer tecla que nao corresponda a uma das operacoes acima\n");
    printf("\n");
}

void calculaSoma(int* numero1, int* numero2){
    printf("Digite um numero: ");
    scanf("%d", &(*numero1));
    printf("Digite um numero: ");
    scanf("%d", &(*numero2));

    int soma = (*numero1) + (*numero2);

    printf("Resultado da soma = %d\n", soma);
}

void calculaSubtracao(int* numero1, int* numero2){
    printf("Digite um numero: ");
    scanf("%d", &(*numero1));
    printf("Digite um numero: ");
    scanf("%d", &(*numero2));

    int subtracao = (*numero1) - (*numero2);

    printf("Resultado da soma = %d\n", subtracao);
}

void calculaMultiplicacao(int* numero1, int* numero2){
    printf("Digite um numero: ");
    scanf("%d", &(*numero1));
    printf("Digite um numero: ");
    scanf("%d", &(*numero2));

    int multiplicacao = (*numero1) * (*numero2);

    printf("Resultado da soma = %d\n", multiplicacao);
}

void calculaDivisao(int* numero1, int* numero2){
    printf("Digite um numero: ");
    scanf("%d", &(*numero1));
    printf("Digite um numero: ");
    scanf("%d", &(*numero2));

    double divisao = (double)(*numero1) / (double)(*numero2);

    printf("Resultado da soma = %.1lf\n", divisao);
}

void fimDePrograma(){
    printf("Ate a proxima\n");
}

void main(){
    apresentaOperacoes();

    int numero1;
    int numero2;
    char escolha;

    printf("Escolha uma das operacoes acima: ");
    scanf(" %c", &escolha);
    setbuf(stdin, NULL);

    switch(escolha){
        case '+':
            calculaSoma(&numero1, &numero2);
            break;
        case '-':
            calculaSubtracao(&numero1, &numero2);
            break;    
        case '*':
            calculaMultiplicacao(&numero1, &numero2);
            break;    
        case '/':
            calculaDivisao(&numero1, &numero2);
            break;    
        default:
            fimDePrograma();
            break;
    }
}

typedef struct{
    int numeroProjeto[10];
    int valor[10];
    char tipoDespesa;
    int receita[10];
    int despesa[10];
}controle;

void main(){
    controle cntrl;
    int valorTotalProjeto[10];

    for(int contador = 0; contador < 10; contador++){
        printf("Digite o numero do projeto: ");
        scanf("%d", &cntrl.numeroProjeto[contador]);

        if(cntrl.numeroProjeto[contador] < 0){
            break;
        }

        printf("Digite o valor do projeto: ");
        scanf("%d", &cntrl.valor[contador]);

        printf("Digite o tipo da despesa do projeto: ");
        scanf(" %c", &cntrl.tipoDespesa);
        setbuf(stdin, NULL);

        if(cntrl.tipoDespesa == 'r' || cntrl.tipoDespesa == 'R'){
            printf("Digite o valor da receita: ");
            scanf("%d", &cntrl.receita[contador]);
            valorTotalProjeto[contador] = cntrl.valor[contador] + cntrl.receita[contador];
            printf("\n");
        }
        
        else if(cntrl.tipoDespesa == 'd' || cntrl.tipoDespesa == 'D'){
            printf("Digite o valor da despesa: ");
            scanf("%d", &cntrl.despesa[contador]);
            valorTotalProjeto[contador] = cntrl.valor[contador] + cntrl.despesa[contador];
            printf("\n");
        }
    }

    for(int contador = 0; contador < 10; contador++){
        if(cntrl.numeroProjeto[contador] < 0){
            break;
        }
        
        printf("Numero do projeto: %d\n",cntrl.numeroProjeto[contador]);
        printf("Valor do projeto: %d\n", cntrl.valor[contador]);
        printf("Valor total do projeto: %d\n", valorTotalProjeto[contador]);
        printf("\n");
    }
}

#include <stdio.h>

// int main(){
//     //criar uma variável para maça, valor pago, letra e opção
//     int quantidade_maca;
//     float valor_pago;
//     char letra;
//     char opcao;
    
//     //criar um menu mostrando duas opções, a e b, usando printf
//     printf("Menu de opcoes: \n");
//     printf("A - Calcular valor das macas.\n");
//     printf("B - Verificar letra vogal ou consoante\n");

//     //pedir ao usuario digitar uma das opções
//     printf("Informe a opcao desejada: ");
//     scanf("%c", &opcao);
//     setbuf(stdin, NULL);

//     //criar um switch
//     switch(opcao){
//         case 'a':
//         case 'A':
//             //informar a quantidade de maças a serem compradas
//             printf("Informe a quantidade de macas que deseja comprar: ");
//             scanf("%d", &quantidade_maca);

//             //verificar se a quantidade informada é válida
//             if(quantidade_maca < 0){
//                 printf("Por favor, informe um valor valido na proxima vez!\n");
//                 break;
//             }else{
//                 //calcular o valor em relação a quantidade de maças
//                 valor_pago = quantidade_maca * 2.5;
//                 //exibir o valor pago pelas maçãs
//                 printf("Valor pago por %d macas eh de: %.2f\n", quantidade_maca, valor_pago);
//             }//else
//             break;
//         case 'b':
//         case 'B':
//             //pedir ao usuario digitar uma letra
//             printf("Digite uma letra: ");
//             scanf("%c", &letra);
//             setbuf(stdin, NULL);
            
//             //verificar se a letra digitada é uma consoante ou vogal, considerando maiusculas e minusculas
//             if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U'){
//                 printf("A letra %c eh uma vogal\n", letra);
//             }else{
//                 printf("A letra %c eh uma consoante ou um caracter especial\n", letra);
//             }
//             break;
//         default:
//             printf("Informe uma escolha valida na proxima!!");
//             break;
//     }//switch

//     return 0;
// }//main

#include <stdio.h>

// int encode(char ch){
//     return (ch + 3);
// }

// int main(){

//     int vetor[5] = {'a','b','c','d','e'};

//     for(int i = 0; i < 5; i++){
//         printf("Vetor = %c\n", vetor[i]);
//     }

//     for(int i = 0; i < 5; i++){
//         vetor[i] = encode(vetor[i]);
//     }

//     for(int i = 0; i < 5; i++){
//         printf("Vetor = %c\n", vetor[i]);
//     }

// }


*/