# Palavra secreta e inicialização
palavra_secreta = "minecraft"
tentativas = 0
progresso = ["_"] * len(palavra_secreta)

# Jogo principal
while True:
    # Entrada do jogador
    letra = input("\nDigite uma letra: ").lower()

    # Atualizando o progresso com as letras acertadas
    for i, char in enumerate(palavra_secreta):
        if letra == char:
            progresso[i] = letra

    # Exibindo o progresso da palavra
    print(" ".join(progresso))

    # Incrementando o número de tentativas
    tentativas += 1

    # Verificando as condições de fim de jogo
    if tentativas == 4 or "_" not in progresso:
        break

# Pergunta final para adivinhar a palavra
palavra = input("\nQual era a palavra secreta? ").lower()

# Resultado final
if palavra == palavra_secreta:
    print("\nParabéns!! Você acertou!")
else:
    print(f"\nQue pena! Você errou! A palavra secreta era '{palavra_secreta}'.")
