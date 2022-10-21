#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define format "%d"

typedef int ItemType; // tipo dos itens

typedef struct no {
    ItemType item;
    struct no *prox;
} *Lista;

Lista criar_no(ItemType x, Lista l);

void exibir(Lista l);

int tamanho(Lista l);

#endif
