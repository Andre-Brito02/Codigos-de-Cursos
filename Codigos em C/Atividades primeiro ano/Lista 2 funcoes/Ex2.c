/*2. Faça um programa que armazene, em um registro, os dados de um funcionário de
uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento,
Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres)
e Salário. Em uma subrotina que recebe o registro como parâmetro passado por
referência, receba os dados digitados pelo usuário e armazene-os na estrutura. Na
função principal, exiba esses dados na tela.*/
#include <stdio.h>

typedef struct{
    char nome[30];
    int idade;
    char sexo[3];
    char cpf[30];
    int dia,mes,ano;
    int setor;
    char cargo[30];
    float salario;
}infos;

infos funcionarios;

void cadastros(infos *funcionarios){
    printf("Digite o nome do(a) funcionario(a): ");
    gets(funcionarios->nome);

    printf("Digite a idade do(a) funcionario(a): ");
    scanf("%d", &funcionarios->idade);
    setbuf(stdin,NULL);

    printf("Digite o sexo do(a) funcionario(a): ");
    gets(funcionarios->sexo);

    printf("Digite o CPF do(a) funcionario(a): ");
    gets(funcionarios->cpf);

    printf("Digite a data de nascimento do(a) funcionario(a): ");
    scanf("%d %d %d", &funcionarios->dia, &funcionarios->mes, &funcionarios->ano);

    printf("Digite o setor do(a) funcionario(a): ");
    scanf("%d", &funcionarios->setor);
    setbuf(stdin,NULL);

    printf("Digite o cargo do(a) funcionario(a): ");
    gets(funcionarios->cargo);

    printf("Digite o salario do(a) funcionario(a): ");
    scanf("%f", &funcionarios->salario);
}

int main(){
    infos funcionarios;    

    cadastros(&funcionarios);

    printf("Nome = %s\n", funcionarios.nome);
    printf("Idade = %d\n", funcionarios.idade);
    printf("Sexo = %s\n", funcionarios.sexo);
    printf("CPF = %s\n", funcionarios.cpf);
    printf("Data de nascimento = %d/%d/%d\n", funcionarios.dia, funcionarios.mes, funcionarios.ano);
    printf("Setor = %d\n", funcionarios.setor);
    printf("Cargo = %s\n", funcionarios.cargo);
    printf("Salario = R$ %.2f\n", funcionarios.salario);
}