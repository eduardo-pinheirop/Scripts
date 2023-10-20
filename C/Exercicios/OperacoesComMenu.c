#include <stdio.h>

int main() {

  float n1, n2;
  int escolha;

  printf("Digite dois números para fazer uma operação:");
  scanf("%f%f", &n1, &n2);

  printf("Escolha uma das seguintes operações digitando o número correspondente:\n");
  printf("1 --- Soma\n2 --- Subtração\n3 --- Multiplicação\n4 --- Divisão\n");

  scanf("%d", &escolha);

  while(escolha < 1 || escolha > 4){
    printf("Escolha inválida \nDigite outro valor:");
    scanf("%d", &escolha);
  }

  switch (escolha) {
    case 1:
      printf("A soma resulta em %.2f", n1 + n2); break;
    case 2:
      printf("A subtração resulta em %.2f", n1 - n2); break;
    case 3:
      printf("A multiplicação resulta em %.2f", n1 * n2); break;
    case 4:
      printf("A divisão resulta em %.2f", n1 / n2); break;
    default:
      break;
  }
  return 0;
}