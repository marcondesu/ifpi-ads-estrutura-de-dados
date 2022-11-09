#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class No {
	public:
		int mat;
		char nome[23];
		No *prox;
		
		No(int m, char n[23]) {
			mat = m;
			strcpy(nome, n);			
			prox = NULL;
		}
};

class Lista {
	public:
		No *inicio;
		No *fim;
	
	    Lista() {
	    	inicio = NULL;
	    	fim = NULL;
		}

		// Adiciona um elemento ao final da lista
		void addToFinal(int m, char n[23]) {
			No *novo = new No(m, n);
			
			if (fim == NULL) {
				inicio = novo;
				fim = novo;
			} else {
				fim->prox = novo;
				fim = novo;
			}
		}

		// Verifica se a lista está vazia
		int lst_vazia() {
			return (inicio == NULL);
		}

		// Adiciona um elemento ao início da lista
		void addToInicio(int m, char n[23]) {
			No *novo = new No(m, n);

			if (lst_vazia()) {
				inicio = novo;
				fim = novo;
			} else {
				novo->prox = inicio;
				inicio = novo;
			}
		}

		// Mostra todos os elementos da lista
		void mostra() {
			cout << "\n## mostra() ##\n";

			if (lst_vazia()) {
				cout << "\nLista vazia!!!";
			} else {
				No *atual = inicio;

				while (atual != NULL) {
					cout << "\n- Nome: " << atual->nome << "\nMatricula: " << atual->mat << "\n";
					atual = atual->prox;
				}
			}
		}

		// Auxiliar no método remove, retorna o endereço do anterior
		No *busca(int mat) {
			No *atual = inicio;

			while (atual != NULL) {
				if (atual->mat == mat) {
					return atual;
				} else {
					atual = atual->prox;
				}
			}

			cout << "\nO elemento não está na lista";
		}
		
		// Remove o nó com o atributo mat correspondente
		void remove(int mat) {
			No *anterior, *atual;

			anterior = NULL;
			atual = inicio;

			while (atual != NULL) {
				if (atual->mat == mat) {
					if (atual == inicio) {
						inicio = inicio->prox;
						break;

					} else if (atual == fim) {
						fim = anterior;
						fim->prox = NULL;
						break;

					} else {
						anterior->prox = atual->prox;
						break;
					}
				}

				anterior = atual;
				atual = atual->prox;
			}
		}

		// Remove todos os nós da lista
		void removeTodos() {
			No *atual = inicio;
			No *proximo = NULL;

			while (atual != NULL) {
					proximo = atual->prox;
					cout << "Apagando: " << atual->nome << endl;
					
					free(atual);
					atual = proximo;						
			}

			inicio = atual;
		}

		// Criar uma nova lista que seja o inverso da primeira
		Lista *cria_lista_inversa() {
			Lista *inversa = new Lista();
			No *atual = inicio;

			while (atual != NULL) {
				inversa->addToInicio(atual->mat, (char*) atual->nome);

				atual = atual->prox;
			}

			return inversa;
		}

		// Retorna o tamanho da lista
		int tamanho() {
			No *atual = inicio;
			int tamanho = 0;

			while (atual != NULL) {
				tamanho++;

				atual = atual->prox;
			}

			return tamanho;
		}			
		
		// Inverte a própria lista
		Lista *listaInvertida() {
			return cria_lista_inversa();
		}
};

main() {
   Lista *lista = new Lista();

   lista->addToFinal(1, (char*) "Cibelle");
   lista->addToFinal(2, (char*) "Marcos");
   lista->addToFinal(3, (char*) "Sakura");
   lista->addToFinal(4, (char*) "Positivo XC7660");

   lista->remove(4);
   lista->mostra();

   lista = lista->listaInvertida();
  	lista->mostra();

   lista->removeTodos();
   lista->mostra();
}
