import re

# CPF de exemplo
cpf = '076.113.740-87'

# Remove caracteres especiais e mantém apenas os números
cpf = re.sub(r'\D', '', cpf)  # Resultado: '99526602005'

# Verifica se o CPF tem 11 dígitos
if len(cpf) != 11:
    print("CPF inválido: tamanho incorreto")
else:
    # Divide o CPF em base e dígitos verificadores
    cpf_base = cpf[:9]  # Primeiros 9 dígitos
    first_num = int(cpf[9])  # Primeiro dígito verificador
    last_num = int(cpf[10])  # Segundo dígito verificador

    # Cálculo do primeiro dígito verificador
    soma_primeiro_digito = 0
    for i, numero in enumerate(cpf_base):
        soma_primeiro_digito += int(numero) * (10 - i)

    resultado_primeiro_digito = soma_primeiro_digito % 11
    primeiro_digito = 0 if resultado_primeiro_digito < 2 else 11 - resultado_primeiro_digito

    # Cálculo do segundo dígito verificador
    soma_segundo_digito = 0
    cpf_base_com_primeiro = cpf_base + str(primeiro_digito)
    for i, numero in enumerate(cpf_base_com_primeiro):
        soma_segundo_digito += int(numero) * (11 - i)

    resultado_segundo_digito = soma_segundo_digito % 11
    segundo_digito = 0 if resultado_segundo_digito < 2 else 11 - resultado_segundo_digito


    # Exibição dos resultados calculados
    print(f"Primeiro dígito calculado: {primeiro_digito}")
    print(f"Segundo dígito calculado: {segundo_digito}")

    # Validação do CPF
    if primeiro_digito == first_num and segundo_digito == last_num:
        print("CPF válido")
    else:
        print("CPF inválido")
