#include <stdio.h>

/*
Proposta: 
   Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento (c = 2 * pi * r).
*/

int main() {
    float raio, comprimento;

    printf("Raio: ");
    scanf("%f", &raio);

    comprimento = 2 * 3.141592 * raio;

    printf("\nComprimento: %.1f", comprimento);
    
    return 0;
}
