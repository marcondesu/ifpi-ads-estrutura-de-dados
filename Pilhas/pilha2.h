#ifndef PILHA3_H
#define PILHA3_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha{
	char item;
	struct pilha *prox;	
} Pilha;

Pilha *topo = NULL;

Pilha* No(char valor);

void push(Pilha *p, char n);
		
char pop();

char getTopo();

bool pilhaVazia();
		
#endif
