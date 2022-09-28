#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class No {
	public:
		char nome;
		No *prox;

		No(char n) {
			nome = n;
			prox = NULL;
		}
};

class Pilha {
	public:
		No *topo;
		
		Pilha() {
			topo = NULL;
		}
		
		void push(char n) {
			No *novo = new No(n);

			if (isEmpty()) {
				topo = novo;
			} else {
				novo->prox = topo;
				topo = novo;
			}
		}
		
		char pop() {
			No *remove = topo;
			char item = topo->nome;
			
			topo = topo->prox;

			free(remove);

			return item;
		}
		
		int isEmpty() {
			return topo == NULL;
		}
};

int main() {
	Pilha* pilha = new Pilha();

	printf("isEmpty() = %d\n\n", pilha->isEmpty());

	pilha->push('a');
	pilha->push('b');
	pilha->push('c');

	printf("Pop: %c\n", pilha->pop());
	printf("Pop: %c\n", pilha->pop());

	printf("\nisEmpty() = %d\n", pilha->isEmpty());

	printf("\nTopo: %c", pilha->topo->nome);
}
