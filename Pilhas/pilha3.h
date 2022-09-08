#ifndef PILHA3_H
#define PILHA3_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int tamanho = 50;
int topo = -1;
char vetor[50];

void push(char n);
		
char pop();

bool pilhaVazia();
		
bool pilhaCheia();
		
char getTopo();
		
#endif
