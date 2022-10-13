#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

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

class Fila {
	public:
		No *inicio;
		No *fim;
		int max;
		int total;

		Fila(int m) {
			inicio = NULL;
			fim = NULL;
			max = m;
			total = 0;
		}

		void append(char n) {
			if (isEmpty()) {
				No *novo = new No(n);

				inicio = novo;
				total++;
			} else if (!isFull()) {
				No *novo = new No(n);

				inicio->prox = novo;
				total++;
			}
		}

		char pop() {
			if (isEmpty()) {
				printf("\nFila vazia!");
			} else {
				
			}
		}

		bool isEmpty() {
			return inicio == NULL;
		}

		bool isFull() {
			return fim != NULL;
		}

	    void popAll() {}
};

int main() {
	Fila *fila = new Fila(5);

	fila->append('a');
	fila->append('b');
	fila->append('c');
	fila->append('d');
	fila->append('e');
	fila->append('f');
	fila->append('g');

	printf("%c", fila->inicio->nome);
}
