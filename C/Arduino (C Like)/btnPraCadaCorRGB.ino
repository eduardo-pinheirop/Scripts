#define ledRed   1
#define ledBlue  2
#define ledGreen 3

#define btnRed   8
#define btnBlue  9
#define btnGreen 10


void setup()
{
  pinMode(ledRed,OUTPUT);
  pinMode(ledBlue,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  
  pinMode(btnRed,INPUT);
  pinMode(btnBlue,INPUT);
  pinMode(btnGreen,INPUT);
}

void loop()
{
  if(digitalRead(btnRed) == HIGH){
  	delay(200);
  	digitalWrite(ledBlue, LOW);
  	digitalWrite(ledGreen, LOW);
    delay(200);
    digitalWrite(ledRed,HIGH);
  }
  
  if(digitalRead(btnBlue) == HIGH){
    digitalWrite(ledRed, LOW);
  	digitalWrite(ledGreen, LOW);
    delay(200);
    digitalWrite(ledBlue, HIGH);
  }
  
  if(digitalRead(btnGreen) == HIGH){
    digitalWrite(ledRed,LOW);
  	digitalWrite(ledBlue, LOW);
    delay(200);
  	digitalWrite(ledGreen, HIGH);
  }
}
