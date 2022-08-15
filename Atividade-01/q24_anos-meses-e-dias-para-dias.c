#include <stdio.h>

/*
Proposta: 
   Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.
*/

int main() {
    int anos, meses, dias_input, dias_output;

    printf("Anos: ");
    scanf("%d", &anos);
    
    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias_input);

    dias_output = (anos * 365) + (meses * 30) + dias_input;

    printf("\n%d dias", dias_output);
    
    return 0;
}
