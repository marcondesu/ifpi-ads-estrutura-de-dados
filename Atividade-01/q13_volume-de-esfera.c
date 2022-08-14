#include <stdio.h>
#include <math.h>

/*
Proposta: 
   Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 * pi * r^3) / 3) (pi = 3,14)
*/

int main() {
    float raio, volume;

    printf("Raio: ");
    scanf("%f", &raio);

    volume = (4 * 3.14 * pow(raio, 3)) / 3;

    printf("\nVolume: %.1f", volume);
    
    return 0;
}
