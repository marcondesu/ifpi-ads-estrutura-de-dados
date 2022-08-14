#include <stdio.h>

/*
Proposta: 
   Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).
*/

int main() {
    float fahrenheit, celsius;

    printf("Temperatura (F): ");
    scanf("%f", &fahrenheit);

    celsius = (5 * fahrenheit - 160) / 9;

    printf("\n%.1f F = %.1f C", fahrenheit, celsius);
    
    return 0;
}
