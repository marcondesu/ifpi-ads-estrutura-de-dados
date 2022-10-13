#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct aluno {
	int mat;
	string nome;
} Aluno;

Aluno lista[3];

int tamanho_lista() {
	return sizeof(lista) / sizeof(Aluno);
} 

void incluirDesordenado() {
	int qa = 0; // índice do primeiro item vazio da lista
	int cont;

	printf("\nInserir novo aluno\n");

	do {
		if (qa < 3) {
			printf("\nMatricula: ");
			scanf("%d", &lista[qa].mat);

			printf("Nome: ");
			scanf("%s", &lista[qa].nome);

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
	for (int i = 0; i < tamanho_lista(); i++) {
		if (lista[i].mat == mat) {
			return i;
		}
	}

	return -1;
}

// Recebe a posição e imprime o elemento na tela
void mostrar(int pos) {
	printf("Matricula: %d\n", lista[pos].mat);
	printf("Nome: %s", lista[pos].nome);
}

// Procura o elemento e o mostra (se não for encontrado informa que ele não existe)
void consultar(int mat) {
	if (procura(mat) != -1) {
		mostrar(procura(mat));
	} else {
		printf("\nO elemento nao esta na lista.");
	}
}

// Estratégia 1: colocar o último elemento da lista na posição do elemento removido
void remover00(int pos) {
	lista[pos] = lista[tamanho_lista()];

	lista[tamanho_lista()].mat = NULL;
	lista[tamanho_lista()].nome = "";
}

// Estratégia 2: mover todos os elementos que estão após o elemento que deve ser removido uma posição a frente.
void remover01(int pos) {
	Aluno aux;

	for (int i = pos; i < tamanho_lista(); i++) {
		aux = lista[i];
		lista[i] = lista[i + 1];
		lista[i + 1] = aux;
	}

	remover00(tamanho_lista());
}

main() {
	incluirDesordenado();
	mostrar(2);

	consultar(4);

	remover00(1);

	mostrar(0);
}
