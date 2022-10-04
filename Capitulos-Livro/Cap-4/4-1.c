#include "./fila.c"

int main() {
    Fila F = criar_fila(5);

    enfileira(F, 1);
    enfileira(F, 2);
    enfileira(F, 3);

    // desenfileira e enfileira o mesmo item
    enfileira(F, desenfileira(F));
    enfileira(F, desenfileira(F));

    printf("%d\n", desenfileira(F)); // 3
}
