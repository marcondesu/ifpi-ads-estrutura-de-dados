#include <stdio.h>

/*
Proposta: 
   Leia um número inteiro de metros, calcule e escreva quantos km e quantos metros ele corresponde.
*/

int main() {
    int metro_input, quilometro, metro_output;

    printf("Valor em metro: ");
    scanf("%d", &metro_input);

    quilometro = metro_input / 1000;
    metro_output = metro_input - (quilometro * 1000);

    printf("\n%dm equivale a %dkm e %dm", metro_input, quilometro, metro_output);
    
    return 0;
}
