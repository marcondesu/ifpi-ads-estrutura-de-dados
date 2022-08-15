#include <stdio.h>

/*
Proposta: 
    Calcule a quantidade de dinheiro gasto por um fumante.
   
    Dados de entrada: 
        .Número de anos que ele fuma
        .Número de cigarros fumados por dia
        .Preço de uma carteira (1 carteira tem 20 cigarros).

*/

int main() {
    int anos;
    float cigarros_por_dia, preco_carteira, dinheiro_gasto;

    printf("Anos fumando: ");
    scanf("%d", &anos);
    
    printf("Cigarros fumados por dia: ");
    scanf("%f", &cigarros_por_dia);

    printf("Preco de uma carteira: ");
    scanf("%f", &preco_carteira);

    dinheiro_gasto = ((cigarros_por_dia / 20) * preco_carteira) * 365;

    printf("\nR$ %.2f", dinheiro_gasto);
    
    return 0;
}
