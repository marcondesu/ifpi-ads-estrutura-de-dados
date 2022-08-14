#include <stdio.h>

/*
Proposta: 
   Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.
*/

int main() {
    float salario;

    printf("Salario: ");
    scanf("%f", &salario);

    salario = salario * 1.25;

    printf("\nNovo salario: R$%.2f", salario);
    
    return 0;
}
