#include "./pilha.c"

int main() {
    int tamanho;

    printf("Tamanho da pilha: ");
    scanf("%d", &tamanho);

    Pilha *pilha_a = criar_pilha(tamanho);
    Pilha *pilha_b = criar_pilha(tamanho);

    preencher_pilha(pilha_a);

    // Ordenar pila <em breve>
}