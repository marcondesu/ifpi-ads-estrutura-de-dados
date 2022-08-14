#include <stdio.h>

/*
Proposta: 
   Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: num = 532 ; inverso = 235).
*/

int main() {
    int number, number_invertido, centena, dezena;

    printf("Numero de 3 digitos: ");
    scanf("%d", &number);

    centena = number / 100;
    dezena = number - centena * 100;

    printf("%d - %d", centena, dezena);

    // number_invertido = centena * 100 + dezena * 10;

    // printf("\nInvertendo %d temos %d", number, number_invertido);
    
    return 0;
}
