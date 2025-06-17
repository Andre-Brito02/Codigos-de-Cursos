numeroUm = 1
stringUm = '1'
numeroTrinta = 30
stringTrinta = '30'
numeroDez = 10
stringDez = '10'

if (numeroUm == int(stringUm)):
  print('As variáveis numeroUm e stringUm tem o mesmo valor, mas tipos diferentes')
else:
  print('As variáveis numeroUm e stringUm não tem o mesmo valor')

if numeroTrinta == int(stringTrinta) and type(numeroTrinta) is type(stringTrinta):
    print('As variáveis numeroTrinta e stringTrinta tem o mesmo valor e mesmo tipo')
else:
    print('As variáveis numeroTrinta e stringTrinta não tem o mesmo tipo')

if (numeroDez == int(stringDez)):
  print('As variáveis numeroDez e stringDez tem o mesmo valor, mas tipos diferentes')
else:
  print('As variáveis numeroDez e stringDez não tem o mesmo valor')
