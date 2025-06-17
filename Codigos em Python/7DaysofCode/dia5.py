listaDeCompras = []
frutas = []
carnes = []
laticinios = []

while(True):
    adicionar = input("Deseja adicionar uma comida na sua lista de compras? ")
    if adicionar == 'nao':
        break
    else:
        comida = input("Qual comida deseja inserir em sua lista de compras? ")
        listaDeCompras.append(comida)
        categoria = input("Qual categoria dessa comida? ")
        if categoria == 'frutas':
            frutas.append(comida)
        elif categoria == 'carnes':
            carnes.append(comida)
        elif categoria == 'laticinios':
            laticinios.append(comida)
    print()

print(f"\nLista de compras: {listaDeCompras}")
print(f"Frutas: {frutas}")
print(f"Carnes: {carnes}")
print(f"Laticínios: {laticinios}")