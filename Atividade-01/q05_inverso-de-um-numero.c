#include <stdio.h>

/*
Proposta: 
   Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: num = 532 ; inverso = 235).
*/

int main() {
    int number, number_invertido, centena, dezena, unidade;

    printf("Numero de 3 digitos: ");
    scanf("%d", &number);

    centena = number / 100;
    dezena = (number - centena * 100) / 10;
    unidade = number - ((centena * 100) + (dezena * 10));
    number_invertido = (unidade * 100) + (dezena * 10) + centena;

    printf("\nInvertendo %d temos %d", number, number_invertido);
    
    return 0;
}
