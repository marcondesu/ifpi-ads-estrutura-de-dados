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
					// cout << "\n@@Nome: " << atual->nome << "\n@@Matricula: " << atual->mat;
					return atual;
				} else {
					atual = atual->prox;
				}
			}

			cout << "\nO elemento não está na lista";
		}
		
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

		/* void removeTodos() {
			No *atual = inicio;
			No *proximo = NULL;

			while (atual != NULL) {
					proximo = atual->prox;
					cout << "\n Apaga:" << atual->nome;
					
					free(atual);
					atual = proximo;						
			}

			inicio = atual;
		} */

		// Criar uma nova lista que seja o inverso da primeira
		Lista *cria_lista_inversa() {
			Lista *inversa;
			No *atual = inicio;

			while (atual != NULL) {
				inversa->addToInicio(atual->mat, atual->nome);

				atual = atual->prox;
			}

			return inversa;
		}
		
		//inverter a propria lista
		// void listainvertida() {}
};

main() {
   Lista *lista = new Lista();

   lista->addToFinal(1, "Joao");
   lista->addToFinal(2, "Gabriela");
   lista->addToFinal(3, "Fabiola");
   lista->addToInicio(4, "Joana Oliveira");
   lista->addToInicio(5, "Cristiano Oliveira");

   lista->mostra();

   Lista *inversa = lista->cria_lista_inversa();

  // lista->listainvertida();
  // lista->mostra();
}