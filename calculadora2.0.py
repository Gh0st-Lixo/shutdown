from os import *
from cgitb import reset
from time import time 

                     # Rodando o programa em loop, para não ter necessidade de ficar executando toda hora
texto = """
*Calculadora 1.0
           
    Digite [ 1 ] para Somar
    Digite [ 2 ] para Dividir
    Digite [ 3 ] para subtrair
    Digite [ 4 ] para Multiplicar\n"""
while True:
    
    print (texto) # Outro Loop caso o Usuario tenha errado       
    while True:
               # Tratamento de erro e Variavel da escolha de operador matematico
        try:
            operador = float (input("Escolha um operador Matematico: "))    
            if ( operador > 4 or operador <= 0):
                print ("Digite um numero entre 1-4")
                continue
        except ValueError:
            print (texto)
            print ("Digite um numero entre 1-4")
            continue
                    # Tratamento de erro e 2 valores para serem calculados
        try:
            num1 = float (input("Digite o primeiro número: "))
            num2 = float (input("Digite o segundo numero número: "))
        except ValueError:
            print ("Digite um valor valido")
            continue
        break
    system("cls")    
#teste de velocidade
    inicio = time()

# Grava o tempo final
    fim = time()

# Calcula o tempo total decorrido
    tempo_total = fim - inicio

    print(f"Tempo de execução: {tempo_total:.2f} segundos")

                      # Verifica a escolha e faz o calculo correspondente
    if ( operador == 1):
        print (f"O resultado é: {num1 + num2}")

    elif ( operador == 2):
        try:
            print (f"O resultado é: {num1 // num2}")
        except ZeroDivisionError:
            print ("Você não pode dividir por zero")
            
    elif ( operador == 3):
        print (f"O resultado é: {num1 - num2}")
    elif ( operador == 4):
        print (f"O resultado é: {num1 * num2}")
    else:
        print ("numero invalido")
    continue
