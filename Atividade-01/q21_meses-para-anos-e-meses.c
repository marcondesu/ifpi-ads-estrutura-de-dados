#include <stdio.h>

/*
Proposta: 
   Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.
*/

int main() {
    int meses_input, anos, meses_output;

    printf("Quantidade de meses: ");
    scanf("%d", &meses_input);

    anos = meses_input / 12;
    meses_output = meses_input - (anos * 12);

    printf("\n%d meses equivale a %d anos e %d meses", meses_input, anos, meses_output);
    
    return 0;
}
