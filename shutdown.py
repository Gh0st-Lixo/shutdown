import os
import sys
print ('''---   Desligamento   ---
Quantos minutos quer que o computador fique ligado?
Digite [ c ] para cancelar um desligamento agendado.

--> ''', end="")
while (True):
    
    pergunta = str(input())
    if (pergunta.lower () == "c"):
        os.system ("shutdown -a")
    
    
    convert = int (pergunta)
    resultado = convert * 60
    os.system(f"shutdown -s -t {resultado}")
   
