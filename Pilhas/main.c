#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha {
	int tamanho;	// tamanho da pilha
	int topo;		// index do elemento mais acima na pilha
	char *vetor;
} Pilha;

Pilha* criar_pilha(int tamanho_da_pilha) {
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	
	p->tamanho = tamanho_da_pilha;
	p->topo = -1;
	p->vetor = (char*)malloc(tamanho_da_pilha * sizeof(char));

	return p;
}

int getTopo(Pilha *p) {
	return p->topo;
}

bool pilhaCheia(Pilha *p) {
	return getTopo(p) != p->tamanho - 1;
}

bool pilhaVazia(Pilha *p) {
	return p->topo != -1;
}

Pilha push(Pilha *p, char valor) {
	if (pilhaCheia(p)) {
		Pilha nova_pilha = *p;

		nova_pilha.vetor[nova_pilha.topo + 1] = valor;
		nova_pilha.topo++;

		return nova_pilha;
	}

	printf("Erro! A pilha esta cheia\n");
}

Pilha pop(Pilha *p) {
	if (pilhaVazia(p)) {
		p->vetor[getTopo(p)] = 0;
		p->topo--;

		return *p;
	}

	printf("Erro! A pilha esta vazia\n");
}

Pilha destruir_pilha(Pilha *p) {
	free((p)->vetor);
	free(p);
	p = NULL;

	return *p;
}

int main() {
	Pilha *pilha_1 = criar_pilha(5);

	*pilha_1 = push(pilha_1, 'a');
	*pilha_1 = push(pilha_1, 'b');
	*pilha_1 = push(pilha_1, 'c');

	*pilha_1 = pop(pilha_1);
	*pilha_1 = pop(pilha_1);

	// *pilha_1 = destruir_pilha(pilha_1);

	printf("Tamanho da pilha: %d\n", pilha_1->tamanho);
	printf("Indice do topo: %d\n", getTopo(pilha_1));
	printf("Vetor da pilha: [%s]\n", pilha_1->vetor);
}
