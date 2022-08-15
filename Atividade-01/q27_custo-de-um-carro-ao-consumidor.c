#include <stdio.h>

/*
Proposta: 
   O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
   Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escreva um programa que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
*/

int main() {
    float custo_de_fabrica, custo_ao_consumidor, percentagem_distribuidor, impostos;

    printf("Custo de fabrica: ");
    scanf("%f", &custo_de_fabrica);

    percentagem_distribuidor = custo_de_fabrica * 1.28;
    impostos = custo_de_fabrica * 1.45;

    custo_ao_consumidor = custo_de_fabrica + percentagem_distribuidor + impostos;

    printf("\nCusto ao consumidor: R$ %.2f", custo_ao_consumidor);
    
    return 0;
}
