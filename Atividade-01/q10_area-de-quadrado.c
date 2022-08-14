#include <stdio.h>

/*
Proposta: 
   Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado * lado).
*/

int main() {
    float lado, area;

    printf("Lado: ");
    scanf("%f", &lado);
    
    area = lado * lado;

    printf("\nArea: %.1f", area);
    
    return 0;
}
