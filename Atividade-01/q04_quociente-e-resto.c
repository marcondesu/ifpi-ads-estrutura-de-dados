#include <stdio.h>

/*
Proposta: 
   Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1º pelo 2º.
*/

int main() {
    int number_1, number_2;
    float quociente, resto;

    printf("Primeiro valor: ");
    scanf("%d", &number_1);
    
    printf("Segundo valor: ");
    scanf("%d", &number_2);

    quociente = number_1 / number_2;
    resto = number_1 % number_2;

    printf("%d / %d = %f\n", number_1, number_2, quociente);
    printf("%d %% %d = %f", number_1, number_2, resto);
    
    return 0;
}
