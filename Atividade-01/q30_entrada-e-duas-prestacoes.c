#include <stdio.h>
#include <math.h>

/*
Proposta: 
    Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior ou igual a cada uma das duas prestações; estas devem ser iguais, inteiras e as maiores possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,00, a entrada é de R$ 102,00 e as duas prestações são iguais a R$ 100,00. Escreva um programa que receba o valor da mercadoria e escreva o valor da entrada e das duas prestações, conforme as regras acima. 
*/

int main() {
    int valor_da_mercadoria, entrada, prestacoes;

    printf("Valor da mercadoria: ");
    scanf("%d", &valor_da_mercadoria);

    entrada = (valor_da_mercadoria / 3) + (valor_da_mercadoria % 3);
    prestacoes = ceil((valor_da_mercadoria - entrada) / 2);

    printf("\nEntrada: R$ %d\n2 prestacoes de: R$ %d", entrada, prestacoes);
    
    return 0;
}
