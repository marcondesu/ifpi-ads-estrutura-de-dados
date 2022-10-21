#include "./lista_encadeada.c"

void substitui(Lista l, ItemType x, ItemType y) {
    while (l != NULL) {
        if (l->item == x) {
            l->item = y;
        }

        l = l->prox;
    }
}

int main() {
    Lista lista = criar_no(3, criar_no(3, criar_no(5, NULL)));

    printf("Lista: ");
    exibir(lista);

    substitui(lista, 3, 0);

    printf("\n\nLista nova: ");
    exibir(lista);
}
