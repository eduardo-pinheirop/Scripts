#define pinoLdr A5
#define pinoLed 3
#define pinoPot A4


void setup()
{
  pinMode(pinoLdr, INPUT);
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoPot, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float leituraLdr = analogRead(pinoLdr);
  
  int leituraPot = analogRead(pinoPot);
  int leituraConvertida = map(leituraPot,0,1023,0,255);
  
  if(leituraLdr<200){
  	analogWrite(pinoLed, leituraConvertida);
  } else{
  	digitalWrite(pinoLed, LOW);
  }
  
  Serial.println(leituraLdr);
  delay(100);
  Serial.println(leituraPot);
}
