#include "lista_ordenada.c"

void main() {
    Lista lista = NULL;

    inserir(1, &lista);
    inserir(7, &lista);
    inserir(2, &lista);

    exibir(lista);
}
