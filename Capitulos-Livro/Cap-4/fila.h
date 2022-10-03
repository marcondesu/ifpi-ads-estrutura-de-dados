#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ItemType; // tipo dos itens da fila

typedef struct fila {
    int tamanho;       // tamanho da fila (max)
    int topo;          // posição do topo (total)
    int inicio;        // posição do início
    int final;         // posição do final
    ItemType *vetor;
} *Fila;

Fila criar_fila(int tamanho_da_fila);

bool fila_vazia(Fila f);

bool fila_cheia(Fila f);

void limpar_fila(Fila f);

void enfileira(Fila f, ItemType item);

ItemType desenfileira(Fila f);

void mostrar_fila(Fila f);

void destruir(Fila f);

#endif
