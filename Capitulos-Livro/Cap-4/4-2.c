#include "./fila.c"

int main() {
    Fila F = criar_fila(5);

    for (int i = 0; i <= 3; i++) {
        enfileira(F, 'A' + i);
    }

    while (!fila_vazia(F)) {
        printf("%c\n", desenfileira(F));
    }

    destruir(F);
}
