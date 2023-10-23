#define btn 2
#define Pot A5
#define pinoTransis 5

bool estadobtn = false;

void setup() {
  pinMode(btn, INPUT);  
  pinMode(Pot, INPUT);
  pinMode(pinoTransis, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if(estadobtn==true){
    int leituraPot = analogRead(Pot);

    int PWMparaOTransis = map(leituraPot,0,1023,0,255);
    analogWrite(pinoTransis, PWMparaOTransis);
    Serial.println(PWMparaOTransis);

  } else{
    digitalWrite(pinoTransis, LOW); 
  } 
  if(digitalRead(btn)==HIGH){
    delay(100);
    if(digitalRead(btn)==LOW){
      estadobtn = !estadobtn;
    }  
  }

}
