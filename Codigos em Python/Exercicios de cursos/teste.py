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

import random as rd

# Letras do alfabeto maiúsculas
letras_maiusculas = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                     'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

# Letras do alfabeto minúsculas
letras_minusculas = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                     'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

# Números
numeros = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

senha = []

for i in range(3):
    senha.append(rd.choice(letras_maiusculas))
    senha.append(rd.choice(letras_minusculas))
    senha.append(rd.choice(numeros))

# Transformando a lista em uma string
senha_str = ''.join(senha)
# Embaralhando os caracteres
rd.shuffle(senha)

# Transformando em string
senha_str = ''.join(senha)
print(senha_str)  # Saída embaralhada, por exemplo: BmC1o7Ak3
