#include <stdio.h>

/*
Proposta: 
   Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele corresponde.
*/

int main() {
    int minutos_input, dias, horas, minutos_output;

    printf("Valor em minutos: ");
    scanf("%d", &minutos_input);

    dias = minutos_input / 1440;
    horas = (minutos_input - (dias * 1440)) / 60;
    minutos_output = minutos_input - (dias * 1440) - (horas * 60);

    printf("\n%d minutos equivale a %d dias, %d horas e %d minutos", minutos_input, dias, horas, minutos_output);
    
    return 0;
}
