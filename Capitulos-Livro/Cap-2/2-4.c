#include "./pilha.c"

int main() {
    /*
    Ideia:
    - iterar a pilha_a
    - identificar o menor valor usando a função menor_valor()
        - push desse valor na pilha_b
        - remove esse valor da pilha_a usando a função pop_em_valor()
    - pilha_a = pilha_b
    */

    int tamanho;

    printf("Tamanho da pilha: ");
    scanf("%d", &tamanho);

    Pilha *pilha_a = criar_pilha(tamanho);
    limpar_pilha(pilha_a);
    Pilha *pilha_b = criar_pilha(tamanho);
    limpar_pilha(pilha_b);

    push(pilha_a, 7);
    push(pilha_a, 2);
    push(pilha_a, 3);
    push(pilha_a, 4);
    push(pilha_a, 5);
    
    printf("\nPilha a\n");
    mostrar_valores(pilha_a);

    for (int i = 0; i < pilha_a->tamanho; i++) {
        push(pilha_b, menor_valor(pilha_a));

        pilha_a->tamanho--;
    }

    printf("\n-----\n");

    printf("Pilha b\n");
    mostrar_valores(pilha_b);

    printf("\n-----\n");
    pilha_a = pop_em_valor(pilha_a, menor_valor(pilha_a));

    
    mostrar_valores(pilha_a);
}
