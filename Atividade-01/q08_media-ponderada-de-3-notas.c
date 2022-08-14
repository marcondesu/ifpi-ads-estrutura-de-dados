#include <stdio.h>

/*
Proposta: 
   Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.
*/

int main() {
    float nota_1, nota_2, nota_3;
    float peso_1, peso_2, peso_3;
    float media;

    printf("Nota 1: ");
    scanf("%f", &nota_1);
    printf("Peso 1: ");
    scanf("%f", &peso_1);
    
    printf("\nNota 2: ");
    scanf("%f", &nota_2);
    printf("Peso 2: ");
    scanf("%f", &peso_2);
    
    printf("\nNota 3: ");
    scanf("%f", &nota_3);
    printf("Peso 3: ");
    scanf("%f", &peso_3);

    media = ((nota_1 + nota_2 + nota_3) / (peso_1 + peso_2 + peso_3)) * 10;

    printf("\nMedia: %.1f", media);
    
    return 0;
}
