import random as rd

numeroSecreto = rd.randrange(1,21)
acertou = True

print("Tente adivinhar o número secreto")
for i in range(1,6):
    tentativa = int(input("Digite um número: "))

    if(tentativa == numeroSecreto):
        print("Parabéns! Você adivinhou o número secreto")
        acertou = True
        break
    elif tentativa > numeroSecreto:
        print("Seu chute foi maior que o número secreto")
        acertou = False
    elif tentativa < numeroSecreto:
        print("Seu chute foi menor que o número secreto")
        acertou = False

if acertou == False:
    print(f"O número secreto é: {numeroSecreto}")