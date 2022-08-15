#include <stdio.h>

/*
Proposta: 
    O latão é constituído de 70% de cobre e 30% de zinco.
    Escreva um programa que calcule a quantidade de cada um desses componentes para se obter certa quantidade de latão (em kg), informada pelo usuário.
*/

int main() {
    float qtd_latao, qtd_cobre, qtd_zinco;

    printf("Quantidade desejada de latao: ");
    scanf("%f", &qtd_latao);

    qtd_cobre = qtd_latao * 0.3;
    qtd_zinco = qtd_latao * 0.7;

    printf("\n%.0fkg de latao = %.1fkg de cobre e %.1fkg de zinco", qtd_latao, qtd_cobre, qtd_zinco);
    
    return 0;
}
