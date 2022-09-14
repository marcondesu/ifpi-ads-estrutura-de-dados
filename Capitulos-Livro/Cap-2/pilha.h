#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha {
	int tamanho;	// tamanho da pilha
	int topo;		// index do elemento mais acima na pilha
	char *vetor;
} Pilha;

int getTopo(Pilha *p);

bool pilhaCheia(Pilha *p);

bool pilhaVazia(Pilha *p);

Pilha* criar_pilha(int tamanho_da_pilha);

void push(Pilha *p, int valor);

int pop(Pilha *p);

void preencher_pilha(Pilha *p);

void destruir(Pilha *p);

#endif
