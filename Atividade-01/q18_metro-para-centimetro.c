#include <stdio.h>

/*
Proposta: 
   Leia um valor em m, calcule e escreva o equivalente em cm.
*/

int main() {
    float metro, centimetro;

    printf("Valor em metro: ");
    scanf("%f", &metro);

    centimetro = metro * 100;

    printf("\n%.2fm = %.0fcm", metro, centimetro);
    
    return 0;
}
