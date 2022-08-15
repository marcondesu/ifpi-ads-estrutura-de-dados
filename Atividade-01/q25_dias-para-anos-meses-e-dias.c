#include <stdio.h>

/*
Proposta: 
   Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias.
*/

int main() {
    int dias_input, anos, meses, dias_output;

    printf("Idade em dias: ");
    scanf("%d", &dias_input);

    anos = dias_input / 365;
    meses = (dias_input - (anos * 365)) / 30;
    dias_output = dias_input - (anos * 365) - (meses * 30);

    printf("\n%d dias equivalem a %d anos, %d meses e %d dias", dias_input, anos, meses, dias_output);
    
    return 0;
}
