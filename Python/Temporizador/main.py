from time import sleep
from pygame import mixer

tmp = 1800
sleep(tmp)

print(f"Temporizando os {tmp/60} minutos")

mixer.init()
mixer.music.load("01PokémonTheme.mp3")
mixer.music.play()

while True:
    query = input("   ")
    if query == "e":
        mixer.music.stop()
    else:
        continue



