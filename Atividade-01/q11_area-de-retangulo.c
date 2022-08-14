#include <stdio.h>

/*
Proposta: 
   Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura).
*/

int main() {
    float base, altura, area;

    printf("Base: ");
    scanf("%f", &base);
    
    printf("Altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("\nArea: %.1f", area);
    
    return 0;
}
