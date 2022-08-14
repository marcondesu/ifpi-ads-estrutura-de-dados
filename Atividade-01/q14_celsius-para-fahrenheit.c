#include <stdio.h>

/*
Proposta: 
   Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)
*/

int main() {
    float celsius, fahrenheit;

    printf("Temperatura (C): ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("\n%.1f C = %.1f F", celsius, fahrenheit);
    
    return 0;
}
