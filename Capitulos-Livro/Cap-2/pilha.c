#include "pilha.h"

int getTopo(Pilha *p) {
	return p->topo;
}

bool pilhaCheia(Pilha *p) {
	return getTopo(p) == p->tamanho - 1;
}

bool pilhaVazia(Pilha *p) {
	return p->topo == -1;
}

Pilha* criar_pilha(int tamanho_da_pilha) {
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	
	p->tamanho = tamanho_da_pilha;
	p->topo = -1;
	p->vetor = (char*)malloc(tamanho_da_pilha * sizeof(int));

    return p;
}

void push(Pilha *p, int valor) {
	if (pilhaCheia(p)) {
        printf("Erro! A pilha esta cheia\n");
	} else {
		p->vetor[getTopo(p) + 1] = valor;
		p->topo++;
	}
}

int pop(Pilha *p) {
	if (pilhaVazia(p)) {
	    printf("Erro! A pilha esta vazia\n");
	} else {
		int valor_topo = p->vetor[getTopo(p)];

		p->vetor[getTopo(p)] = 0;
		p->topo--;

		return valor_topo;
	}
}

void preencher_pilha(Pilha *p) {
	float valor;

	for (float i = 0; i < p->tamanho; i++) {
		printf("> ");
		scanf("%f", &valor);

		push(p, valor);
	}
}

void limpar_pilha(Pilha *p) {
	push(p, '#');
	push(p, '#');
	push(p, '#');
	pop(p);
	pop(p);
	pop(p);
}

void destruir(Pilha *p) {
	free((p)->vetor);
	free(p);
	p = NULL;
}
