#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define format "%d"

typedef int ItemType; // tipo dos itens

typedef struct no {
    ItemType item;
    struct no *prox;
} *Lista;

Lista criar_no(ItemType x, Lista p) {
    Lista lista = malloc(sizeof(struct no));

    lista->item = x;
    lista->prox = p;

    return lista;
}

void inserir(ItemType x, Lista *l) {
    while (*l != NULL && (*l)->item < x) {
        l = &(*l)->prox;
    }

    *l = criar_no(x, *l);
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
