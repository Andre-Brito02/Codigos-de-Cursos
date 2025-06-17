import os

lista_de_compras = []

while True:
    valor = input("Digite i para inserir, a para apagar, l para listar e 0 para sair: ")
    
    if valor == '0':
        break
    elif valor == 'i':
        os.system('clear')
        add_valor_lista = input("Digite o que deseja adicionar na lista: ")
        lista_de_compras.append(add_valor_lista)
    elif valor == 'a':
        indice_str = input('Escolha o índice para apagar: ')
        try:
            indice = int(indice_str)
            del lista_de_compras[indice]
        except ValueError:
            print('Por favor digite número int.')
        except IndexError:
            print('Índice não existe na lista')
        except Exception:
            print('Erro desconhecido')
    elif valor == 'l':
        os.system('clear')
        if lista_de_compras == []:
            print("Não há itens na lista!")
        else:
            for indice, item in enumerate(lista_de_compras):
                print(indice, item)

'''
"""
Faça uma lista de comprar com listas
O usuário deve ter a possibilidade de
inserir, apagar e listar valores da sua lista
Não permita que o programa quebre com 
erros de índices inexistentes na lista.
"""
import os

lista = []

while True:
    print('Selecione uma opção')
    opcao = input('[i]nserir [a]pagar [l]istar: ')

    if opcao == 'i':
        os.system('clear')
        valor = input('Valor: ')
        lista.append(valor)
    elif opcao == 'a':
        indice_str = input(
            'Escolha o índice para apagar: '
        )

        try:
            indice = int(indice_str)
            del lista[indice]
        except ValueError:
            print('Por favor digite número int.')
        except IndexError:
            print('Índice não existe na lista')
        except Exception:
            print('Erro desconhecido')
    elif opcao == 'l':
        os.system('clear')

        if len(lista) == 0:
            print('Nada para listar')

        for i, valor in enumerate(lista):
            print(i, valor)
    else:
        print('Por favor, escolha i, a ou l.')
'''