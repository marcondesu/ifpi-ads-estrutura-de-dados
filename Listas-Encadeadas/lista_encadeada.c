#include "./lista_encadeada.h"

Lista criar_no(ItemType x, Lista p) {
    Lista lista = malloc(sizeof(struct no));

    lista->item = x;
    lista->prox = p;

    return lista;
}

void exibir(Lista l) {
    while (l != NULL) {
        if (l->prox != NULL) {
            printf(format ", ", l->item);

        } else  {
            printf(format, l->item);

        }

        l = l->prox;
    }
}

int tamanho(Lista l) {
    if (l == NULL) return 0;
    return 1 + tamanho(l->prox);
}
