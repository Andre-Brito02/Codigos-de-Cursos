# id = 'indiozinhos'
# nums = []

# for i in range(1, 11): 
#     nums.append(i)

# for i in range(0,9):
#     print(nums[i], end=' ')
#     if nums[i] %3 == 0:
#         print(id)

# print(nums[-1], 'no pequeno bote')

# for i in range(1, 6):
#     print('1 ' * i)

# num1 = int(input("Digite um número: "))
# num2 = int(input("Digite um número: "))
# print("'+': soma\n'-': subtração\n'*': multiplicação\n'/': divisão")
# operacao = input("Digite a operação: ")
# print()

# if operacao == '+':
#     print(f'Resultado da soma = {num1 + num2}')
# elif operacao == '-':
#     print(f'Resultado da subtração = {num1 - num2}')
# elif operacao == '*':
#     print(f'Resultado da multiplicação = {num1 * num2}')
# elif operacao == '/':
#     print(f'Resultado da divisão = {num1 / num2}')

# calculadora = input("Digite uma operação(Exemplo: 5 + 6): ")
# partes = calculadora.split()

# num1 = int(partes[0])
# num2 = int(partes[2])

# if '+' in calculadora:
#     print(f'Resultado da soma = {num1 + num2}')
# elif '-' in calculadora:
#     print(f'Resultado da subtração = {num1 - num2}')
# elif '*' in calculadora:
#     print(f'Resultado da multiplicação = {num1 * num2}')
# elif '/' in calculadora:
#     print(f'Resultado da divisão = {num1 / num2:.2f}')

# def fatorial(num):
#     if num == 2:
#         return 2
#     else:
#         return num * fatorial(num-1)

# num = int(input("Digite um número: "))
#if num == 0 or num == 1:
#   print(f'O fatorial de {num} é: 1')
#else:
#   print(f"O valor do fatorial de {num} é: {fatorial(num)}")

# vogais = ['a', 'e', 'i', 'o', 'u']
# consoantes = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z']
# vogais_utilizadas = []
# consoantes_utilizadas = []
# contador = 0
# qtd_vogais = 0
# qtd_consoantes = 0

# frase = input("Digite uma frase: ")

# for char in frase:
#     if char in vogais:
#         vogais_utilizadas.append(char)
#     elif char in consoantes:
#         consoantes_utilizadas.append(char)

# qtd_vogais = len(vogais_utilizadas)
# qtd_consoantes = len(consoantes_utilizadas)

# print(f"\nFrase: {frase}")
# print(f'Vogais utilizadas: {vogais_utilizadas}')
# print(f'Consoantes utilizadas: {consoantes_utilizadas}')
# print(f'Quantidade de vogais utilizadas: {qtd_vogais}')
# print(f'Quantidade de Consoantes utilizadas: {qtd_consoantes}')

frase = input("Digite uma frase: ")
letras = {}

# Usando um loop `for` simplifica a contagem
for char in frase:
    if char != ' ':  # Ignora espaços diretamente
        if char not in letras:
            letras[char] = 1
        else:
            letras[char] += 1

# Imprime apenas as letras com valor maior que 1
for chave, valor in letras.items():
    if valor > 1:
        print(f'{chave}: {valor}')
