import random as rd

def multiplicacao(*args):
    multi = 1
    for numero in args:
        multi *= numero
    return multi

def verificaParImpar(numero):
    if numero %2 == 0:
        return 'par'
    else:
        return 'impar'

quantidadeDeVezes = rd.randrange(1,8)
numeros = []
for i in range(quantidadeDeVezes):
    numero = rd.randrange(1, 11)
    numeros.append(numero)

tuplaDaListaNumeros = tuple(numeros)

resultadoMultiplicacao = multiplicacao(*tuplaDaListaNumeros)
print(f"Resultado da multiplicação = {resultadoMultiplicacao}")

numero = rd.randrange(1,101)
resultadoParImpar = verificaParImpar(numero)
print(f"O número {numero} é {resultadoParImpar}")