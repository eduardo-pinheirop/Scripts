#include <stdio.h>
#include <math.h>

void bask(float a, float b, float c);

int main() {
  bask(1.0, 2.0, -3.0);

  return 0;
}

void bask(float a, float b, float c) {
  float delta = pow(b, 2) - 4 * a * c;

  if (delta > 0) {
    float r1 = (-b + sqrt(delta)) / (2 * a);
    float r2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raízes são %.2f e %.2f", r1, r2);

  } else if (delta == 0) {

    float r = (-b) / (2 * a);
    printf("A raiz é %.2f", r);

  } else {
    printf("A equação não possui raízes");

  }

}