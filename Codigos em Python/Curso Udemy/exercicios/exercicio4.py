# ========== QUESTÃO 1 ==========
num = input("Digite um número: ")

try:
    num_inteiro = int(num)
    if num_inteiro %2 == 0:
        print(f'O número {num_inteiro} é par')
    else:
        print(f'O número {num_inteiro} é ímpar')
except:
    print("O dado inserido não é do tipo int")

# ========== QUESTÃO 2 ==========
horario = input("\nDigite a hora atual: ")

try:
    horario_int = int(horario)
    if horario_int >= 0 and horario_int <= 11:
        print("Bom dia")
    elif horario_int >= 12 and horario_int <= 17:
        print("Boa tarde")
    elif horario_int >= 18 and horario_int <= 23:
        print("Boa noite")
    else:
        print("Hora inexistente")
except:
    print("O dado inserido não é do tipo int")

# ========== QUESTÃO 3 ==========
nome = input("\nDigite seu nome: ")

if len(nome) <= 4:
    print("Seu nome é curto")
elif len(nome) >= 5 and len(nome) <= 6:
    print("Seu nome é normal")
elif len(nome) > 6:
    print("Seu nome é muito grande")
    