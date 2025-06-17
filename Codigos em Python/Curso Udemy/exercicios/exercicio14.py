def exibe_lista_de_dicionarios(produtos, titulo):
    print(f"\n{titulo}")
    print("-" * 30)
    for produto in produtos:
        print(f"Nome: {produto['nome']} | Preço: R$ {produto['preco']:.2f}")
    print("-" * 30)

produtos = [
    {'nome': 'Produto 5', 'preco': 10.00},
    {'nome': 'Produto 1', 'preco': 22.32},
    {'nome': 'Produto 3', 'preco': 10.11},
    {'nome': 'Produto 2', 'preco': 105.87},
    {'nome': 'Produto 4', 'preco': 69.90},
]

# Cópias das listas para não modificar a original
novos_produtos = [produto.copy() for produto in produtos]
produtos_ordenados_por_nome = [produto.copy() for produto in produtos]
produtos_ordenados_por_preco = [produto.copy() for produto in produtos]

# Exibir lista original
exibe_lista_de_dicionarios(produtos, "Lista Original")

# Aumentando o preço em 10%
for produto in novos_produtos:
    produto['preco'] += produto['preco'] * 0.1  # Aumento de 10%

# Ordenando as listas
produtos_ordenados_por_nome.sort(key=lambda produto: produto['nome'], reverse=True)
produtos_ordenados_por_preco.sort(key=lambda produto: produto['preco'])

# Exibir as listas modificadas
exibe_lista_de_dicionarios(novos_produtos, "Lista com Preços +10%")
exibe_lista_de_dicionarios(produtos_ordenados_por_nome, "Lista Ordenada por Nome (Decrescente)")
exibe_lista_de_dicionarios(produtos_ordenados_por_preco, "Lista Ordenada por Preço (Crescente)")
