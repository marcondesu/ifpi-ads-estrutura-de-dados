#include <stdio.h>

/*
Proposta: 
   Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2).
    (área=(base * altura)/2)
*/

int main() {
    float base, altura, area;

    printf("Base: ");
    scanf("%f", &base);
    
    printf("Altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nArea: %.1f", area);
    
    return 0;
}
