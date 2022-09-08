#include <stdio.h>

/*
    Um ponteiro é um número inteiro que representa um endereço de memória
*/

int main() {
    int var = 8;

    /* Ponteiro vazio
    void* ptr = NULL;
    */

    int* ptr = &var;

    // atualiza o valor de var, porque ptr está apontando para seu endereço de memória
    *ptr = 10;

    // mostra o endereço de memória
    printf("Endereco de memoria de ptr: %p\nValor de var: %d", &ptr, var);
}