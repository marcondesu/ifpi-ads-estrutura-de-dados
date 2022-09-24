// posfixa.c - converte infixa parentesiada em posfixa

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../Cap-2/pilha.c"

int prio(char o) {
    switch(o) {
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
    }
    return -1; // operador inválido
}

char *posfixa(char *e) {
    // expressão posfixa vazia
    static char s[256];
    int j = 0;
    Pilha *P = criar_pilha(256);

    for (int i = 0; e[i]; i++) {
        if (e[i] == ')') {
            push(P, '(');
        
        } else if (isdigit(e[i])) {
            s[j++] = e[i];
        
        } else if (strchr("+-/*", e[i])) {
            while (!pilhaVazia(P) && prio(getTopo(P)) >= prio(e[i])) {
                s[j++] = pop(P);
            }

            push(P, e[i]);
        } else if (e[i] == ')') {
            while (getTopo(P) != '(') {
                s[j++] = pop(P);
            }

            pop(P);
        }
    }

    while (!pilhaVazia(P)) {
        s[j++] = pop(P);
    }

    s[j] = '\0';
    destruir(P);

    return s;
}
