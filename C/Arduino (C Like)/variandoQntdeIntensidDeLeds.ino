#define pinoPot A0
#define pinoIntens A1

int pinosLeds[] = {11,10,9,6,5,3}; //usando as portas PWM
int leituraPot;
int leituraDaIntens;
int valorCorrespNaFaixaDeNumDeLeds;
int valorCorrespDaIntens;


void setup(){
	pinMode(pinoPot, INPUT);
  	pinMode(pinoIntens, INPUT);	
  
    for(int p=0;p<6;p++){
  		pinMode(pinosLeds[p], OUTPUT);
    }
}

void acendendo(int ledLimite, int intensidade)
{
  int cont;
  
  for(cont=0;cont<ledLimite;cont++){
    analogWrite(pinosLeds[cont], intensidade);
  }
  for(cont=ledLimite;cont<6;cont++){
  	analogWrite(pinosLeds[cont], LOW);  
  }
}
    
void loop()
{
  leituraPot = analogRead(pinoPot);
  leituraDaIntens = analogRead(pinoIntens);
  
  valorCorrespNaFaixaDeNumDeLeds = map(leituraPot,0,1023,0,7);
  valorCorrespDaIntens = map(leituraDaIntens,0,1023,0,255);
  
  
  
  acendendo(valorCorrespNaFaixaDeNumDeLeds, valorCorrespDaIntens);
}
