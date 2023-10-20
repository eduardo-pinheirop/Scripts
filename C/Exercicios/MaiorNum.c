#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  float n1, n2;

  printf("Digite dois números:");
  scanf("%f %f", &n1, &n2);

  if(n1 > n2){
    printf("O maior é %.2f", n1);
  } else if(n1 < n2){
    printf("O maior é %.2f", n2);
  } else {
    printf("Os números são iguais");
  }

  return 0;
}