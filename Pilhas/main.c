#include "pilha3.c"

int main() {
	push('a');
	push('b');
	push('c');

	printf("Pilha: %s\n\n", vetor);

	printf("- Desempilhado: %c\n", pop());

	printf("\nTamanho da pilha: %d\n", tamanho);
	printf("Indice do topo: %d\n", topo);
	printf("\nPilha: %s\n", vetor);

	/* Pilha *pilha_1 = criar_pilha(5);

	push(pilha_1, 'a');
	push(pilha_1, 'b');
	push(pilha_1, 'c');

	printf("Pilha: %s\n\n", pilha_1->vetor);

	printf("- Desempilhado: %c\n", pop(pilha_1));
	printf("- Desempilhado: %c\n", pop(pilha_1));

	printf("\nTamanho da pilha: %d\n", pilha_1->tamanho);
	printf("Indice do topo: %d\n", pilha_1->topo);
	printf("\nPilha antes da destruicao: %s\n", pilha_1->vetor);

	destruir(pilha_1);
	printf("Pilha apos destruicao: %s\n", pilha_1->vetor); */
}
