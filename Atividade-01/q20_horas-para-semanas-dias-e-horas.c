#include <stdio.h>

/*
Proposta: 
   Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele corresponde.
*/

int main() {
    int horas_input, semanas, dias, horas_output;

    printf("Valor em horas: ");
    scanf("%d", &horas_input);

    semanas = horas_input / 168;
    dias = (horas_input - (semanas * 168)) / 24;
    horas_output = horas_input - (semanas * 168) - (dias * 24);

    printf("\n%dh = %d semanas, %d dias e %d horas", horas_input, semanas, dias, horas_output);
    
    return 0;
}
