#include <stdio.h>

int main(){

  float nota1, nota2;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  printf("A média final é %.2f", (nota1*2+nota2*3)/5);

  return 0;
}