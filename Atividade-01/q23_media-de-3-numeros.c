#include <stdio.h>

/*
Proposta: 
   Leia 3 números, calcule e escreva a média dos números.
*/

int main() {
    int numero_1, numero_2, numero_3;
    float media;

    printf("Primeiro numero: ");
    scanf("%d", &numero_1);
    
    printf("Segundo numero: ");
    scanf("%d", &numero_2);
    
    printf("Terceiro numero: ");
    scanf("%d", &numero_3);

    media = (numero_1 + numero_2 + numero_3) / 3;

    printf("\nMedia = %.2f", media);
    
    return 0;
}
