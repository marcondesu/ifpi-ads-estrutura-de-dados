#include <stdio.h>

/*
Proposta: 
   Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6).
*/

int main() {
    float kmh, ms;

    printf("Velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("\n%.1fkm/h = %.1fm/s", kmh, ms);
    
    return 0;
}
