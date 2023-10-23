#define pinoPot A5
#define baseTrans 11

void setup(){
  pinMode(pinoPot, INPUT);
  pinMode(baseTrans, OUTPUT);
  analogReference(5);
  
  Serial.begin(9600);	
}

void loop(){
  int leituraPot = analogRead(pinoPot);
  
  int leituraEmPWM = map(leituraPot,0,1023,0,255);
  
  if(leituraEmPWM == 0){
  	digitalWrite(baseTrans, LOW);
  } else {
  	analogWrite(baseTrans, leituraEmPWM);
  }
  
  Serial.println(leituraPot);
  //Serial.println(leituraEmPWM);
}
