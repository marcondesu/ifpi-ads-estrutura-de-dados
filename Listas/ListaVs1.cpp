#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
	#define MAX 50

typedef struct aluno {
	int mat;
	string nome;
} Aluno;

Aluno lista[MAX];
int qa; // índice do último elemento da lista

void incluirDesordenado() {
	int cont;

	do {
		if (qa < MAX) {
			printf("\nMatricula: ");
			scanf("%d", &lista[qa].mat);

			printf("Nome: ");
			cin>>lista[qa].nome;
			// scanf("%s", lista[qa].nome);
			fflush(stdin);

			qa++;

			printf("- Aluno inserido.\n\n");
		} else {
			printf("\n- Turma cheia.\n");
			
			break;
		}

		printf("Inserir outro? [1- Sim/2- Nao]\n> ");
		scanf("%d", &cont);

	} while (cont == 1);
}

// sizeof(Aluno) = 40
// Retorna a posição do elemento procurado
int procura(int mat) {
	for (int i = 0; i < qa; i++) {
		if (lista[i].mat == mat) {
			return i;
		}
	}

	return -1;
}

// Recebe a posição e imprime o elemento na tela
void mostrar(int pos) {
	printf("Matricula: %d\n", lista[pos].mat);
	// printf("Nome: %s", lista[pos].nome);
	cout << lista[pos].nome;
}

// Procura o elemento e o mostra (se não for encontrado informa que ele não existe)
void consultar(int mat) {
	if (procura(mat) != -1) {
		mostrar(procura(mat));
	} else {
		printf("\nO elemento nao esta na lista.\n");
	}
}

// Estratégia 1: colocar o último elemento da lista na posição do elemento removido
void remover00(int pos) {
	lista[pos] = lista[qa];
	qa--;
}

// Estratégia 2: mover todos os elementos que estão após o elemento que deve ser removido uma posição a frente.
void remover01(int pos) {
	Aluno aux;

	for (int i = pos; i < qa; i++) {
		aux = lista[i];
		lista[i] = lista[i + 1];
		lista[i + 1] = aux;
	}

	remover00(qa);
}

main() {
	printf("----- Incluir desordenado -----\n");
	incluirDesordenado();

	printf("\n----- Mostrar(2) -----\n");
	mostrar(2);

	printf("\n\n---- Consultar(4) ----");
	consultar(4);

	printf("\n### Remover00(1) ###\n");
	remover00(1);

	printf("\n----- Mostrar(0) -----\n");
	mostrar(0);
}
