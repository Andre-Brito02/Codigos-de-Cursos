nome = input("Digite seu nome: ")
idade = int(input("Digite sua idade: "))
linguagem = input("Digite a linguagem de programação que está aprendendo: ")
print(f'\nOlá {nome}, você tem {idade} anos e já está aprendendo {linguagem}')

print(f"\nVocê gosta de estudar {linguagem}? ")
escolha = int(input("1 - SIM, 2 - NÃO: "))
if(escolha == 1):
    print("Muito bom! Continue estudando e você terá muito sucesso.")
elif(escolha == 2):
    print("Ahh que pena... Já tentou aprender outras linguagens?")