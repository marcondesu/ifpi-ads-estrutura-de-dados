#include "pilha3.h"

char getTopo() {
    return vetor[topo];
}

bool pilhaVazia() {
    return topo == -1;
}

bool pilhaCheia() {
    return topo == 49;
}

void push(char n) {
    if (pilhaCheia()) {
        printf("Erro! A pilha esta cheia\n");
        abort();
	}
	
    vetor[++topo] = n;
}

char pop() {
    if (pilhaVazia()) {
        printf("Erro! A pilha esta vazia\n");
        abort();
    }

    char valor_topo = vetor[topo];
    vetor[topo] = 0;
    topo--;

    return valor_topo;
}
