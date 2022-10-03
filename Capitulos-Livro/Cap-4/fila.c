#include "./fila.h"

Fila criar_fila(int tamanho_da_fila) {
    Fila f = malloc(sizeof(struct fila));

    f->tamanho = tamanho_da_fila;
    f->topo = 0;
    f->inicio = 0;
    f->final = f->topo + 1;
    f->vetor = malloc(tamanho_da_fila * sizeof(ItemType));

    limpar_fila(f);

    return f;
}

bool fila_vazia(Fila f) {
    return f->topo == -1;
}

bool fila_cheia(Fila f) {
    return f->topo == f->tamanho;
}

/* Utilizada logo após a criação de uma fila. Define todos os valores como 0.*/
void limpar_fila(Fila f) {
    for (int i = 0; i < f->tamanho; i++) {
        f->vetor[i] = 0;
    }
}

void enfileira(Fila f, ItemType item) {
    if (fila_cheia(f)) {
        printf("\nFila cheia!");
    } else {
        f->vetor[f->topo] = item;
        f->topo++;
    }
}

ItemType desenfileira(Fila f) {
    if (fila_vazia(f)) {
        printf("\nFila vazia!");
    }
    
    ItemType item = f->vetor[f->topo - 1];

    f->vetor[f->topo - 1] = 0;
    f->topo--;

    return item;
    
}

void mostrar_fila(Fila f) {
    for (int i = 0; i < f->tamanho; i++) {
        printf("[%d] %d\n", i, f->vetor[i]);
    }
}

void destruir(Fila f) {
    free(f->vetor);
    free(f);
    f = NULL;
}
