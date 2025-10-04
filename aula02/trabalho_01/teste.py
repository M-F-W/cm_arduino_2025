def soma(a, b):
    return a + b
def subtrai(a, b):
    return a - b
def multiplica(a, b):
    return a * b
def divide(a, b):
    if b == 0:
        return "Erro: Divisão por zero"
    return a / b
# Testes
if __name__ == "__main__":
    print("Soma: ", soma(10, 5))          # 15
    print("Subtração: ", subtrai(10, 5))  # 5
    print("Multiplicação: ", multiplica(10, 5))  # 50
    print("Divisão: ", divide(10, 5))     # 2.0
    print("Divisão por zero: ", divide(10, 0))  # Erro: Divisão por zero

