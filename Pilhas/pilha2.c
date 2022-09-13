#include "pilha2.h"

char getTopo() {
    return topo->item;
}

Pilha* No(char valor) {
    Pilha *pilha_2 = (Pilha*)malloc(sizeof(Pilha));
	pilha_2->item = valor;
	pilha_2->prox = NULL;

	return pilha_2;
}

void push(Pilha *p, char n) {
    Pilha *novo = No(n);

	if (p->prox == NULL){
		p->prox = novo;
	}
	else {
		topo = novo;
	}
}