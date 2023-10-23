#define pinoCursorPot A5
#define pinoled 3

void setup() {
  pinMode(pinoCursorPot, INPUT);
  pinMode(pinoled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leituraPot = analogRead(pinoCursorPot);

  int valorPWM = map(leituraPot,0,1023,0,255);

  analogWrite(pinoled, valorPWM);

  Serial.print("Leitura Potenciometro:");
  Serial.println(leituraPot);
  delay(100);
}
