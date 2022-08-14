#include <stdio.h>

/*
Proposta: 
   Leia um valor em km, calcule e escreva o equivalente em m.
*/

int main() {
    float quilometro, metro;

    printf("Distancia em km: ");
    scanf("%f", &quilometro);

    metro = quilometro * 1000;

    printf("\n%.2fkm equivale a %.0fm", quilometro, metro);
    
    return 0;
}
