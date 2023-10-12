#1              
#print("Olá Mundo!")

#2
#nome = input("Qual o seu nome?")
#print(f"Bem vindo {nome}")

#3
#prim = int(input("Digite o primeiro número:"))
#seg = int(input("Digite o segundo número: "))

#soma = prim + seg

#print(soma)

#4
#caractere = input("Digite algo: ")

#teste1 = caractere.isnumeric()

#if teste1 == True:
#    teste1a = caractere.isdecimal()

#    if teste1a == True:
#        print("O tipo é float")
#    else:
#        print("O tipo é inteiro")
#else:

#    teste2 = caractere.isalpha()

#    if teste2 == True:
#        print("O tipo é string")
#    else:
#        print("O tipo é alfanumérico")

#Resolucão2
#n = input("Digite algo: ")
#print(type(n))

#Resolucão3
#dado = input("Digite algo: ")

#teste1 = dado.isnumeric()
#teste2 = dado.isalpha()
#teste3 = dado.isalnum()

#print(f"É numérico? {teste1}")
#print(f"É alfabético? {teste2}")
#print(f"É alfanumérico? {teste3}")

#5
#n = int(input("Digite um número: "))

#ante = n-1
#suce = n+1

#print(f"Seu antecessor é {ante} e seu sucessor é {suce}")

#6
#n = float(input("Digite um número: "))

#dob = 2*n
#trip = 3*n
#raiz = n**(1/2)

#print(f"O dobro é {dob} \nO triplo é {trip} \nE a raiz é {raiz})

#7
#n1 = float(input("Primeira nota: "))
#n2 = float(input("Segunda nota: "))

#med = (n1+n2)/2
#print(f"A média é {med}")

#8
#met = float(input("Digite o valor em metros: "))

#cent = int(met*100)
#mili = int(met*1000)

#print(f"O valor equivale a {cent}cm e {mili}mm")

#9
#n = int(input("Digite um número: "))

#i = 0

#while i < 11:
#    mult = int(n*i)
#    print(f"{n}*{i}={mult}")
#    i=i+1

#10
#reais = float(input("Quantos reais deseja converter? "))
#dolar = round(reais/5.14, 2)

#print(f"O equivalente é US${dolar}")

#11
#largura = float(input("Largura da parede em metros: "))
#altura = float(input("Altura da parede em metros: "))

#area = largura*altura

#litros = round(area/2, 2)
#print(f"Precisa-se de {litros} litros de tinta")

#12
#precoVelho = float(input("Digite o preço em reais: "))

#precoNovo = round(precoVelho*0.9, 3)

#print(f"O preço com desconto é R${precoNovo}")

#13
#antigo = float(input("Qual o seu salário antigo?(Só números)"))

#novo = antigo*1.15

#print(f"Seu novo salário é {novo}")

#14
#cels = float(input("Digite a temperatura em °C: "))

#fahr = (cels*1.8)+32

#print(f"Equivale a {fahr}°F")

#15
#vel = float(input("Qual a velocidade do carro?(Em km/h): "))

#if vel > 80:
#    multa = (vel-80)*7
#    print(f"Você foi multado em R${multa} por excesso de velocidade.")
#else:
#    print("Dentro do limite de velocidade :)")

#19
#cont = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0]

#for num in cont:
#    print(num)

#20
#numbers = range(10, 0, -1)

#for num in numbers:
#    from time import sleep
#    sleep(1)

#    print(num)

#21**sleep
#numeros = range(50)

#for num in numeros:
#    if num%2 == 0:
#        print(num)

#        from time import sleep
#        sleep(0.5)
