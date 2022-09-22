// posfixa.c - converte infixa completamente parentesiada em posfixa

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../Cap-2/pilha.c"

char *posfixa(Pilha *p) {
    // expressão posfixa vazia
    Pilha *posfixa = criar_pilha(13);

    // pilha de caracteres
    Pilha *P = criar_pilha(13);

    int j = 0;

    char character;
    
    // ((9 - 1) / (1 + 3)) = 91-13+/
    // percorre a expressão infixa da esquerda para a direita ->
    for (int i = 0; i <= 12; i++) {
        character = p->vetor[i];

        if (isdigit(character)) { // se for um dígito de 0-9 (operando), anexe-o à expressão posfixa
            push_char(posfixa, character);
            j++;
        } else if (strchr("+*-/", character)) { // se for um operador, inserir na pilha P
            push_char(P, character);
        }
         else if (character == ')') { // se for um parêntese de fechamento, remover um item de P e anexá-lo a s
            push_char(posfixa, pop(P));
        }
    }

    destruir(P);

    return posfixa->vetor;
}

int main() {
    // expressão infixa
    Pilha *infixa = criar_pilha(13);

    push_char(infixa, '(');
    push_char(infixa, '(');
    push_char(infixa, '9');
    push_char(infixa, '-');
    push_char(infixa, '1');
    push_char(infixa, ')');
    push_char(infixa, '/');
    push_char(infixa, '(');
    push_char(infixa, '1');
    push_char(infixa, '+');
    push_char(infixa, '3');
    push_char(infixa, ')');
    push_char(infixa, ')');

    printf("\nPosfixa: %s\n", posfixa(infixa));
}
