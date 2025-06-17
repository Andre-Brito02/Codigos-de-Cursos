listaDeCompras = []
frutas = []
carnes = []
laticinios = []
doces = []
vegetais = []

while(True):
    decisao = input("Deseja adicionar ou remover uma comida na sua lista de compras? ")
    if decisao == 'nao':
        break
    elif decisao == 'adicionar':
        comida = input("Qual comida deseja inserir em sua lista de compras? ")
        listaDeCompras.append(comida)
        categoria = input("Qual categoria dessa comida? ")
        if categoria == 'frutas':
            frutas.append(comida)
        elif categoria == 'carnes':
            carnes.append(comida)
        elif categoria == 'laticinios':
            laticinios.append(comida)
        elif categoria == 'doces':
            doces.append(comida)
        elif categoria == 'vegetais':
            vegetais.append(comida)
    elif decisao == 'remover':
        if listaDeCompras == []:
            print("Não é possível remover, pois a lista de compras está vazia")
        else:
            print(f"Lista de compras: {listaDeCompras}")
            comida = input("Qual comida deseja remover da lista? ")
            if comida not in listaDeCompras:
                print("Comida não encontrada")
                continue
            else:
                listaDeCompras.remove(comida)
            print(f"\nLista atualizada: {listaDeCompras}")
    print()

print(f"\nLista de compras: {listaDeCompras}")
print("\nCategoria e alimentos na lista/comprados: ")
print(f"Frutas: {frutas}")
print(f"Carnes: {carnes}")
print(f"Laticínios: {laticinios}")
print(f"Doces: {doces}")
print(f"Vegetais: {vegetais}")