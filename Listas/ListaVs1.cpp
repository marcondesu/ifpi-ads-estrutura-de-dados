#include <stdio.h>
#include <iostream>

using namespace std;
#define MAX 50 // Tamanho máximo da lista

typedef struct aluno {
	int mat;
	string nome;
} Aluno;

Aluno lista[MAX];
int indice; // Índice do último elemento da lista

void incluirDesordenado() {
	printf("----- Incluir desordenado -----\n");
	int opcao;

	do {
		if (indice < MAX) {
			printf("\nMatricula: ");
			scanf("%d", &lista[indice].mat);

			printf("Nome: ");
			cin>>lista[indice].nome;
			// scanf("%s", lista[qa].nome);
			fflush(stdin);

			indice++;

			printf("- Aluno inserido.\n\n");
		} else {
			printf("\n- Turma cheia.\n");
			
			break;
		}

		printf("Inserir outro? [1- Sim/2- Nao]\n> ");
		scanf("%d", &opcao);

	} while (opcao == 1);
}

// sizeof(Aluno) = 40
// Retorna a posição do elemento procurado
int procura(int mat) {
	for (int i = 0; i < indice; i++) {
		if (lista[i].mat == mat) {
			return i;
		}
	}

	return -1;
}

// Recebe a posição e imprime o elemento na tela
void mostrar(int pos) {
	printf("\n----- Mostrar(%d) -----\n", pos);

	printf("Matricula: %d\n", lista[pos].mat);
	// printf("Nome: %s", lista[pos].nome);
	cout << "Nome: " << lista[pos].nome << "\n";
}

// Procura o elemento e o mostra (se não for encontrado informa que ele não existe)
void consultar(int mat) {
	printf("\n---- Consultar(%d) ----", mat);

	if (procura(mat) != -1) {
		mostrar(procura(mat));
	} else {
		printf("\nO elemento nao esta na lista.\n");
	}
}

// Estratégia 1: colocar o último elemento da lista na posição do elemento removido
void remover00(int pos) {
	printf("\n### Remover00(%d) ###\n", pos);
	
	lista[pos] = lista[indice];
	indice--;
}

// Estratégia 2: mover todos os elementos que estão após o elemento que deve ser removido uma posição a frente.
void remover01(int pos) {
	Aluno aux;

	for (int i = pos; i < indice; i++) {
		aux = lista[i];
		lista[i] = lista[i + 1];
		lista[i + 1] = aux;
	}

	remover00(indice);
}

main() {
	incluirDesordenado();

	mostrar(2);

	consultar(4);
	consultar(3);

	remover00(1);

	mostrar(0);
	mostrar(1);
	mostrar(2);
}
