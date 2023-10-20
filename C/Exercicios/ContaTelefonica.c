#include <stdio.h>

int main(){
  int pulsosExc, chamadas;
  float valorInterurbanos, total;

  printf("Digite quantos pulsos excedentes foram usados: ");
  scanf("%d", &pulsosExc);

  printf("Digite o valor total de interurbanos em reais: ");
  scanf("%f", &valorInterurbanos);

  printf("Digite a quantidade de chamadas para celular: ");
  scanf("%d", &chamadas);

  total = 21.40 + pulsosExc * 0.03 + valorInterurbanos + chamadas * 0.4;

  printf("O total da conta é R$ %.2f", total);

  return 0;
}