#include "./lista_encadeada.c"

ItemType ultimo(Lista l) {
    while (l->prox != NULL) {
        l = l->prox;
    }

    return l->item;
}

int main() {
    Lista lista = criar_no(3, criar_no(3, criar_no(5, NULL)));

    printf("Lista: ");
    exibir(lista);

    printf("\n\nUltimo item da lista: " format, ultimo(lista));
}
