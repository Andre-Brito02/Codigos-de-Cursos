# class Pessoa:
#     def __init__(self, nome, sobrenome):
#         self.nome = nome
#         self.sobrenome = sobrenome
    
#     def imprimeNome(self):
#         return self.nome + " " + self.sobrenome
    
# p1 = Pessoa('André', 'Brito')
# print(p1.imprimeNome())
import time

class Person:
    def __init__(self, name):
        self._name = name

    @property
    def name(self):
        print("Name:", end=' ')
        return self._name
    
    @name.setter
    def name(self, name):
        print(f"Changing on the name: {self._name}")
        self._name = name

print("Starting Program")
time.sleep(1)
new_person = Person("André")
print(new_person.name)
time.sleep(2)
new_person.name = 'Brito'
time.sleep(2)
print(new_person.name)
time.sleep(2)
print("Program ending")
time.sleep(1)