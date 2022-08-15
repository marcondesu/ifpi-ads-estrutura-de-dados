#include <stdio.h>

/*
Proposta: 
    Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de notas de R$ 50, de R$ 20, de R$ 10, de R$ 5 e de R$ 2, para uma quantia solicitada de R$ 87, o programa deveria indicar uma nota de R$ 50, uma nota de R$20,00, uma nota de R$ 10, uma nota de R$ 5 e uma nota de R$ 2. Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima.
*/

int main() {
    int dinheiro, nota_50, nota_20, nota_10, nota_5, nota_2;

    printf("Dinheiro: ");
    scanf("%d", &dinheiro);

    nota_50 = dinheiro / 50;
    nota_20 = (dinheiro - (nota_50 * 50)) / 20;
    nota_10 = (dinheiro - (nota_50 * 50) - (nota_20 * 20)) / 10;
    nota_5  = (dinheiro - (nota_50 * 50) - (nota_20 * 20) - (nota_10 * 10)) / 5;
    nota_2 = (dinheiro - (nota_50 * 50) - (nota_20 * 20) - (nota_10 * 10) - (nota_5 * 5)) / 2;

    printf("\nNotas de R$ 50,00: %d\nNotas de R$ 20,00: %d\nNotas de R$ 10,00: %d\nNotas de R$ 5,00: %d\nNotas de R$ 2,00: %d", nota_50, nota_20, nota_10, nota_5, nota_2);
    return 0;
}
