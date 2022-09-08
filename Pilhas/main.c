#include "pilha1.c"

int main() {
	Pilha *pilha_1 = criar_pilha(5);

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
	printf("Pilha apos destruicao: %s\n", pilha_1->vetor);
}
