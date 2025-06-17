# nums = [1, 2, 3, 4, 5, 6]

# for i in range(len(nums)):
#     x = 0
#     while(x <= i):
#         print(nums[x], end=" ")
#         x += 1
#     print()

# texto = 'Olá mundo'
# print(texto[::-1])# Inverter um texto

# def numeros_divisiveis_por_7(numbers):
#     numeros_divisiveis_por_7 = [num for num in numbers if num %7 == 0 ]
#     print(numeros_divisiveis_por_7)

# def numeros_que_contem_3(numbers):
#     numeros_que_contem_3 = [str(num) for num in numbers if str(3) in num]
#     print(numeros_que_contem_3)

# numeros_divisiveis_por_7(numbers = [x for x in range(1, 1000)])
# numeros_que_contem_3(numbers = [str(x) for x in range(1, 1000)])

# frase = 'sandjsndkjadsk sjadksajdklsajkd sljd sakljdsa kdjsak djaskd sakdja skl'
# quantidade_de_espacos = [letra for letra in frase if letra == ' ']
# print(len(quantidade_de_espacos))

# def is_leap(year):
#     leap = False
    
#     # Write your logic here
#     if year %4 == 0:
#         leap = True
        
#     if year %100 == 0:
#         leap = False
#         if year %400 == 0:
#             leap = True
        
    
#     return leap

# year = int(input())
# leap = is_leap(year)
# print(leap)

# Write code below 💖

# number = int(input())
# total = 0

# for i in range(1, number+1):
#   total += pow(i, 2)
# print(total)
import kagglehub

# Download latest version
path = kagglehub.dataset_download("uciml/pima-indians-diabetes-database")

print("Path to dataset files:", path)