#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  float gastoEsposa, gastoMarido, valorDevidoDeCada;

  printf("Digite o gasto total pago pelo marido: ");
  scanf("%f", &gastoMarido);

  printf("Digite o gasto total pago pela esposa: ");
  scanf("%f", &gastoEsposa);

  valorDevidoDeCada = (gastoMarido+gastoEsposa)/2.0;

  printf("\nO marido pagou %.2f %% das despesas\n", (gastoMarido/(gastoMarido+gastoEsposa))*100);
  printf("A esposa pagou %.2f %% das despesas\n\n", (gastoEsposa/(gastoMarido+gastoEsposa))*100);

  printf("O saldo do pagamento de despesas do marido foi %.2f \n", gastoMarido - valorDevidoDeCada);
  printf("O saldo do pagamento de despesas da esposa foi %.2f \n\n", gastoEsposa - valorDevidoDeCada);

  printf("OBS: Quem está com saldo negativo de pagamento de despesa, deve passar o montante para o que está com saudo positivo.");

  return 0;
}