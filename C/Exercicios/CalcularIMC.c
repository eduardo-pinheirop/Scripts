#include <stdio.h>
#include <math.h>

int main(){
    float massa, altura, imc;

    printf("Digite sua massa corporal em kg:");
    scanf("%f", &massa);

    printf("Digite sua altura em metros:");
    scanf("%f", &altura);

    imc = massa / pow(altura, 2);

    /*
    if(imc > 18.49){
        if(imc < 24.99){
            printf("Seu peso está normal!");
        } else {
            printf("Você está acima do peso!");
        }
    } else {
        printf("Você está abaixo do peso!");
    }
    */

    if(imc < 18.49){
        printf("Você está abaixo do peso");
    } else if(imc >= 18.49 && imc <= 24.99){
        printf("Seu peso está normal");
    } else{
        printf("Você está acima do peso");
    }

    return 0;
}