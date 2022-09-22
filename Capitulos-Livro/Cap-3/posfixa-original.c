// posfixa.c - converte infixa completamente parentesiada em posfixa

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../Cap-2/pilha.c"

char *posfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha *P = criar_pilha(256);

    for (int i = 0; e[i]; i++) {
        if (isdigit(e[i])) {
            s[j++] = e[i];

        } else if (strchr("+*-/", e[i])) {
            push(e[i], P);
        }
         else if (e[i] == ')') {
            s[j++] = pop(P);
        }

        s[j] = '\0';
        destruir(P);

        return s;
    }
}

int main() {
    char e[256];
    
    printf("Infixa: ");
    scanf("%s", &e);

    printf("\nPosfixa: %s\n", posfixa(e));
}
