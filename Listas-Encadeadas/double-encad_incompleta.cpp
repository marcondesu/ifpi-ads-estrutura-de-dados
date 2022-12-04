#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class No {
	public:
		int mat;
		char nome[23];

		No *prox;
		No *ant;

		No(int m, char n[23]){
			mat = m;
			strcpy(nome, n);
			prox = NULL;
			ant = NULL;
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

		void addToFinal(int m, char n[23]) {
			No *novo = new No(m, n);

			if (fim == NULL) { // fim = NULL -> lista vazia
				inicio = novo;
				fim = novo;
			} else { // fim != NULL -> lista não vazia, adiciona depois de fim
				fim->prox = novo;
				fim = novo;
			}
		}
		
		void addToIni(int m, char n[23]) {
			No *novo = new No(m, n);

			if (fim == NULL) { // se a lista estiver vazia
				inicio = novo;
				fim = novo;
			} else {
				novo->prox = inicio;
				inicio = novo;
			}
		}
		
		void addOrd(int m, char n[23]) {
			No *novo = new No(m, n);

			if (fim == NULL) { // lista vazia
				inicio = novo;
				fim = novo;
				cout << inicio->mat << endl;
			} else {
				No *atual = inicio;
				No *anterior;

				while (atual->mat < m) {
					anterior = atual;

					if (atual->prox != NULL) {
						atual = atual->prox;
					}
				}
				cout << "OK" << endl;

				if (atual == inicio) { // colocar item na primeira posição
					fim = inicio;
					novo->prox = inicio;
					inicio = novo;
				} else {
					anterior->prox = novo;
					novo->prox = atual;
					atual = novo;
				}
			}
		}
		
		// Mostra todos os elementos do início ao final da lista
		void mostraIniFim() {
			No *atual = inicio;

			while (atual != NULL) {
				cout << "[" << atual->mat << "] " << atual->nome << endl;

				atual = atual->prox;
			}
		}
		
		// Mostra todos os elementos do final ao inicio da lista
		void mostraFimIni();

		int removerFinal();
		
		int removerInicio();

		int remover(int m);
};

main() {
	Lista *l = new Lista();

	l->addOrd(2, (char*) "Marcos");
	l->addOrd(3, (char*) "Floppa");
	l->addOrd(1, (char*) "Cibelle");
	
	/* l->addOrd(2, (char*) "Marcos");
	l->addOrd(1, (char*) "Cibelle");
	l->addOrd(4, (char*) "Floppa");
	l->addOrd(3, (char*) "Sakura"); */

	l->mostraIniFim();

   	/* Lista *l = new Lista();
   
   	l->addOrd(1,"Joana Oliveira");
   	l->addOrd(10,"Cristiano Oliveira");
  	l->mostra();
   	l->addOrd(8,"Joao");
   	l->addOrd(4,"Fabio");
   	l->mostraIniFim(); 
  	l->mostraFimIni();	
   	
	if (l->remover(4)==1)
       	cout<<"Elemento removido!!";
   	else
       	cout<<"Elemento nao encontrado!!";    
   	
	l->mostraIniFim();  */
}
