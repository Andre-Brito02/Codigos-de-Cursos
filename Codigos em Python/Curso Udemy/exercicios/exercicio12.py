perguntas = [
    {
        'Pergunta': 'Quanto é 2 + 2?',
        'Opcoes': ['1','3', '4', '5'],
        'Resposta': '4'
    },
    
    {
        'Pergunta': 'Quanto é 5*5?',
        'Opcoes': ['25', '55', '10', '51'],
        'Resposta': '25'
    },

    {
        'Pergunta': 'Quanto é 10/2?',
        'Opcoes': ['4', '5', '2', '1'],
        'Resposta': '5'
    }
]

for chave in perguntas:
    print(f'Pergunta: {chave['Pergunta']}')
    
    for indice, opcoes in enumerate(chave['Opcoes']):
        print(f'{indice}) {opcoes}')
    
    resposta = input("Digite sua resposta: ")
    resposta_int = int(resposta)

    if chave['Opcoes'][resposta_int] == chave['Resposta']:
        print("\nVocê acertou!!!")
    else:
        print(f"\nQue pena, você errou! A resposta certa era {chave['Resposta']}!") 
    
    print()