def soma(num1, num2):
    return num1 + num2

def subtracao(num1, num2):
    return num1 - num2

def multiplicacao(num1, num2):
    return num1 * num2

def divisao(num1, num2):
    return num1 / num2

def menu_de_operacoes():
    print("Calculadora: ")
    print("Soma\nSubtração\nMultiplicação\nDivisão\nSair\n")

menu_de_operacoes()
operacao = ''

while(operacao != 'sair'):
    operacao = input("Qual operação deseja fazer? ")
    
    if operacao == 'soma':
        num1 = float(input("Digite um número: "))
        num2 = float(input("Digite um número: "))
        resultado = soma(num1, num2)
        print(f"Valor da soma: {resultado}\n")
    elif operacao == 'subtracao':
        num1 = float(input("Digite um número: "))
        num2 = float(input("Digite um número: "))
        resultado = subtracao(num1, num2)
        print(f"Valor da subtração: {resultado}\n")
    elif operacao == 'multiplicacao':
        num1 = float(input("Digite um número: "))
        num2 = float(input("Digite um número: "))
        resultado = multiplicacao(num1, num2)
        print(f"Valor da multiplicação: {resultado}\n")
    elif operacao == 'divisao':
        num1 = float(input("Digite um número: "))
        num2 = float(input("Digite um número: "))
        resultado = divisao(num1, num2)
        print(f"Valor da divisão: {resultado}\n")
    elif operacao == 'sair':
        print("Até a próxima :)")
        break