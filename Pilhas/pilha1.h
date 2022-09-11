#ifndef PILHA1_H
#define PILHA1_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void push(Pilha *p, char valor);

char pop(Pilha *p);

void limpar_pilha(Pilha *p);

void destruir(Pilha *p);

#endif
