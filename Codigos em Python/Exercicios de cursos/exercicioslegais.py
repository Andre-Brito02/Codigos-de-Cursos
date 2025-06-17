# def exibe_Informacoes(salario_liquido, salario, inss, fgts):
#     salario_liquido = salario - inss
#     print(f"Salário = {salario:.2f}")
#     print(f"INSS = {inss:.2f}")
#     print(f"FGTS = {fgts:.2f}")
#     print(f"Salário líquido = {salario_liquido:.2f}")

# #criar uma variavel que recebe o valor por horas trabalhadas
# valor_horas_trabalhadas = int(input("Digite o valor que recebe por hora: "))
# #criar uma variavel que recebe a quantidade de horas trabalhadas no mes
# horas_trabalhadas_mes = int(input("Digite a quantidade de horas que trabalha por mês: "))
# print()
# #criar uma variavel que calculara o salario baseado nas horas e no valor por horas
# salario = valor_horas_trabalhadas * horas_trabalhadas_mes
# #criar uma variavel que calculara o imposto de renda
# imposto_renda = 0
# #criar uma variavel que calculara o valor do inss
# inss = (salario * 10) / 100
# #criar uma variavel que calculara o valor do fgts
# fgts = (salario * 11) / 100
# #criar uma variavel que calculara o novo salario
# salario_liquido = 0

# #verificar, a partir do salario, a quantidade de desconto que tera no salario
# if(salario <= 900):
#     print("Isento de imposto de renda")
#     exibe_Informacoes(salario_liquido, salario, inss, fgts)
# elif(salario > 900 and salario <= 1500):
#     imposto_renda = (salario * 5) / 100
#     print("Imposto de renda = {}".format(imposto_renda))
#     exibe_Informacoes(salario_liquido, salario, inss, fgts)
# elif(salario > 1500 and salario <= 2500):
#     imposto_renda = (salario * 10) / 100
#     print("Imposto de renda = {}".format(imposto_renda))
#     exibe_Informacoes(salario_liquido, salario, inss, fgts)
# else:
#     imposto_renda = (salario * 20) / 100
#     print("Imposto de renda = {}".format(imposto_renda))
#     exibe_Informacoes(salario_liquido, salario, inss, fgts)

# def calcula_Media(media):
#     #verificar, a partir da media, o conceito e a situação do aluno
#     if(media >= 9.0 and media <= 10):
#         print(f"Média = {media:.2f}")
#         print("Conceito = A")
#         print("Aprovado")
#     elif(media >= 7.5 and media < 9):
#         print(f"Média = {media:.2f}")
#         print("Conceito = B")
#         print("Aprovado")
#     elif(media >= 6.0 and media < 7.5):
#         print(f"Média = {media:.2f}")
#         print("Conceito = C")
#         print("Aprovado")
#     elif(media >= 4.0 and media < 6.0):
#         print(f"Média = {media:.2f}")
#         print("Conceito = D")
#         print("Reprovado")
#     elif(media >= 0 and media < 4.0):
#         print(f"Média = {media:.2f}")
#         print("Conceito = E")
#         print("Reprovado")

# #criar duas variaveis que receberao notas de um aluno
# nota1 = float(input("Digite a nota 1: "))
# nota2 = float(input("Digite a nota 2: "))
# #criar uma variavel que calculara a media do aluno
# media = (nota1 + nota2) / 2

# print()
# calcula_Media(media)

# #criar as variaveis equivalente aos lados do triângulo
# ladoA = int(input("Digite o valor do lado do triângulo: "))
# ladoB = int(input("Digite o valor do lado do triângulo: "))
# ladoC = int(input("Digite o valor do lado do triângulo: "))

# #verificar se os lados formam um triângulo ou não
# if(((ladoA + ladoB) > ladoC) or ((ladoA + ladoC) > ladoB) or ((ladoB + ladoC) > ladoA)):
#     #verifica, a partir dos lados do triângulo, qual nome ele recebe
#     if(ladoA == ladoB == ladoC):
#         print("Forma um triângulo Equilátero")
#     elif(ladoA == ladoB or ladoA == ladoC or ladoB == ladoC):
#         print("Forma um triângulo Isóceles")
#     elif(ladoA != ladoB != ladoC):
#         print("Forma um triângulo Escaleno")
#     else:
#         print("Os valores informados não formam um triângulo")


# list = []
# soma = 0

# for i in range(1,5):
#     numero = int(input("Digite um número: "))
#     list.append(numero)   
#     soma += numero

# media = soma / 4    
# print(soma)
# print(media)


# list = []
# list_par = []
# list_impar = []

# for i in range(1,21):
#     numero = int(input("Digite um número: "))
#     list.append(numero)
    
#     if(numero %2 == 0):
#         list_par.append(numero)
#     else:
#         list_impar.append(numero)
        
# print(f"Vetor completo = {list}")
# print(f"Vetor par = {list_par}")
# print(f"Vetor impar = {list_impar}")


# import calendar
# yy = 2023
# mm = 1
# print(calendar.month(yy,mm))


# import random as rd

# jokenpo = ['pedra', 'papel', 'tesoura']

# suaEscolha = rd.randrange(0, len(jokenpo))
# escolhaAdversaria = rd.randrange(0, len(jokenpo))

# print(f"Sua escolha foi {jokenpo[suaEscolha]}")
# print(f"A escolha adversária foi {jokenpo[escolhaAdversaria]}")

# if(jokenpo[suaEscolha] == 'pedra' and jokenpo[escolhaAdversaria] == 'tesoura'):    
#     print("Você ganhou")

# elif(jokenpo[suaEscolha] == 'pedra' and jokenpo[escolhaAdversaria] == 'pedra'):
#     print("Empate! Jogue novamente")

# elif(jokenpo[suaEscolha] == 'pedra' and jokenpo[escolhaAdversaria] == 'papel'):
#     print("Você perdeu")

# elif(jokenpo[suaEscolha] == 'papel' and jokenpo[escolhaAdversaria] == 'pedra'):    
#     print("Você ganhou")

# elif(jokenpo[suaEscolha] == 'papel' and jokenpo[escolhaAdversaria] == 'papel'):
#     print("Empate! Jogue novamente")

# elif(jokenpo[suaEscolha] == 'papel' and jokenpo[escolhaAdversaria] == 'tesoura'):
#     print("Você perdeu")

# elif(jokenpo[suaEscolha] == 'tesoura' and jokenpo[escolhaAdversaria] == 'papel'):
#     print("Você ganhou")

# elif(jokenpo[suaEscolha] == 'tesoura' and jokenpo[escolhaAdversaria] == 'tesoura'):
#     print("Empate! Jogue novamente")

# elif(jokenpo[suaEscolha] == 'tesoura' and jokenpo[escolhaAdversaria] == 'pedra'):
#     print("Você perdeu")

# def obter_diferenca(a, b, c, d):
#     diferenca = a * b - c * d
#     print(f"DIFERENCA = {diferenca}")

# def pegar_numeros():
#     try:
#         a = int(input("Digite o 1° número: "))
#         b = int(input("Digite o 2° número: "))
#         c = int(input("Digite o 3° número: "))
#         d = int(input("Digite o 4° número: "))
        
#         obter_diferenca(a, b, c, d)
#     except ValueError:
#         print("Digite um valor numérico\n")
#         pegar_numeros()
    
# pegar_numeros()


# def exibe_lista_de_dicionarios(produtos, titulo):
#     print(f"\n{titulo}")
#     print("-" * 30)
#     for produto in produtos:
#         print(f"Nome: {produto['nome']} | Preço: R$ {produto['preco']:.2f}")
#     print("-" * 30)

# produtos = [
#     {'nome': 'Produto 5', 'preco': 10.00},
#     {'nome': 'Produto 1', 'preco': 22.32},
#     {'nome': 'Produto 3', 'preco': 10.11},
#     {'nome': 'Produto 2', 'preco': 105.87},
#     {'nome': 'Produto 4', 'preco': 69.90},
# ]

# # Cópias das listas para não modificar a original
# novos_produtos = [produto.copy() for produto in produtos]
# produtos_ordenados_por_nome = [produto.copy() for produto in produtos]
# produtos_ordenados_por_preco = [produto.copy() for produto in produtos]

# # Exibir lista original
# exibe_lista_de_dicionarios(produtos, "Lista Original")

# # Aumentando o preço em 10%
# for produto in novos_produtos:
#     produto['preco'] += produto['preco'] * 0.1  # Aumento de 10%

# # Ordenando as listas
# produtos_ordenados_por_nome.sort(key=lambda produto: produto['nome'], reverse=True)
# produtos_ordenados_por_preco.sort(key=lambda produto: produto['preco'])

# # Exibir as listas modificadas
# exibe_lista_de_dicionarios(novos_produtos, "Lista com Preços +10%")
# exibe_lista_de_dicionarios(produtos_ordenados_por_nome, "Lista Ordenada por Nome (Decrescente)")
# exibe_lista_de_dicionarios(produtos_ordenados_por_preco, "Lista Ordenada por Preço (Crescente)")
