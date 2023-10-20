#include <stdio.h>

float calcular_media(float n1, float n2, float n3, char tipo_media);

int main(){
  float result = calcular_media(10, 7, 6, 'A');

  if(result != 404040){
    printf("%.2f", result);
  } else {
    printf("A escolha da média está incorreta");
  }

  return 0;
}

float calcular_media(float n1, float n2, float n3, char tipo_media){
  
  switch(tipo_media){
    case 'A':
      return (n1+n2+n3)/3; break;
    case 'P':
      return (n1*5 + n2*3 + n3*2)/10; break;
    case 'H':
      return 3/(1/n1 + 1/n2 + 1/n3); break;
    default:
      return 404040; break;
  }
}