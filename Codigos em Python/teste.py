import tkinter as tk
from tkinter import messagebox

# Lista inicial de blocos de memória (em kB)
memory_blocks = [10, 4, 20, 18, 7, 9, 12, 13]

# Função do algoritmo First Fit
def first_fit(solicitacao):
    for i in range(len(memory_blocks)):
        if solicitacao <= memory_blocks[i]:
            memory_blocks[i] -= solicitacao
            return i
    return -1

# Função para alocar a solicitação e atualizar a interface
def alocar():
    try:
        solicitacao = int(entry_solicitacao.get())
        if solicitacao <= 0:
            raise ValueError
    except ValueError:
        messagebox.showerror("Erro", "Digite um número inteiro positivo.")
        return

    bloco = first_fit(solicitacao)
    if bloco != -1:
        result_label.config(text=f"Alocado no bloco {bloco}")
    else:
        result_label.config(text="Solicitação não alocada")

    atualizar_blocos()

# Atualiza a exibição dos blocos
def atualizar_blocos():
    blocos_texto = [f"{b}k" for b in memory_blocks]
    blocos_label.config(text="Blocos de memória: " + " | ".join(blocos_texto))

# Janela principal
janela = tk.Tk()
janela.title("Alocação First Fit")

# Componentes da interface
tk.Label(janela, text="Tamanho da solicitação (kB):").pack(pady=5)
entry_solicitacao = tk.Entry(janela)
entry_solicitacao.pack(pady=5)

tk.Button(janela, text="Alocar", command=alocar).pack(pady=5)

result_label = tk.Label(janela, text="")
result_label.pack(pady=5)

blocos_label = tk.Label(janela, text="")
blocos_label.pack(pady=10)

# Mostrar os blocos iniciais
atualizar_blocos()

# Iniciar interface
janela.mainloop()