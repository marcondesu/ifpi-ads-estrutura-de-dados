#include "./fila.c"

int main() {
    Fila fila_1 = criar_fila(5);

    enfileira(fila_1, 1);
    enfileira(fila_1, 2);
    enfileira(fila_1, 3);
    enfileira(fila_1, 4);
    enfileira(fila_1, 5);

    mostrar_fila(fila_1);
    
    destruir(fila_1);
}
