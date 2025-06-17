escolha = input("Gostaria de seguir na área de Front-End ou Back-End? ")
escolhasUsuario = []
contador = True

if escolha == "front-end":
    escolhasUsuario.append(escolha.title())
    print("\nVocê tem interesse em aprender Front-End!")
    escolha = input("Gostaria de aprender React ou Vue? ")
    escolhasUsuario.append(escolha.capitalize())
elif escolha == "back-end":
    escolhasUsuario.append(escolha.title())
    print("\nVocê tem interesse em aprender Back-End!")
    escolha = input("Gostaria de aprender C# ou Java? ")
    escolhasUsuario.append(escolha.capitalize())

escolha = input("Gostaria de se especializar em uma área ou migrar para Fullstack? ")
if escolha == "especializar":
    escolhasUsuario.append(escolha.capitalize())
    print(f"Você escolheu se especializar em {escolhasUsuario[0]}")
elif escolha == "fullstack":
    escolhasUsuario.append(escolha.capitalize())
    print(f"Você escolheu migrar para {escolhasUsuario[-1]}")

while(contador):
    escolha = input("\nQuais tecnologias gostaria de conhecer ou especializar? ")
    escolhasUsuario.append(escolha.capitalize())
    continuar = input("Tem mais alguma tecnologia que gostaria de aprender? ")
    print()

    if continuar != "sim":
        contador = False

print("\nEscolhas do usuário: ")
print(escolhasUsuario)