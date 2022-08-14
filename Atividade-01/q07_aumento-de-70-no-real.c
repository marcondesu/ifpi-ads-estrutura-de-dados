#include <stdio.h>

/*
Proposta: 
   Leia um valor em real (R$), calcule e escreva 70% deste valor.
*/

int main() {
    float real;

    printf("Valor em real: ");
    scanf("%f", &real);

    real = real * 1.7;

    printf("\n70%% de aumento: R$ %.2f", real);
    
    return 0;
}
