#include <stdio.h>

/*
Proposta: 
   Leia um valor em kg (quilograma), calcule e escreva o equivalente em g (grama).
*/

int main() {
    float quilograma, grama;

    printf("Valor em kg: ");
    scanf("%f", &quilograma);

    grama = quilograma * 1000;

    printf("\n%.2fkg = %.0fg", quilograma, grama);
    
    return 0;
}
