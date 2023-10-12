import random
from time import sleep

numeros = []

def sorteia(inicio, fim):

    cont = 0
    while cont < qntd:
        num = random.randint(inicio, fim)
        numeros.append(num)
        cont = cont+1
        print("Sorteando...")
        sleep(0.5)

    print("-+" * 30)
    print(f"A sua lista de {qntd} numeros sorteados entre {inicio} e {fim} é:")

    # Aparecer os números da lista com delay
    sleep(1)
    for i in numeros:
        print(i, end=" ")
    #    sleep(0.8)

    somaPares = 0
    for numeroDaVez in numeros:
        if numeroDaVez % 2 == 0:
            somaPares = somaPares + numeroDaVez
        else:
            pass

    print(f"\n\nA soma dos num pares é {somaPares}")


sleep(0.5)
qntd = int(input("Digite a quantidade de números que deseja sortear: "))

a = int(input("Digite o primeiro num do intervalo: "))
b = int(input("Digite o segundo num do intervalo:  "))
print("-+" * 30)

sorteia(a, b)