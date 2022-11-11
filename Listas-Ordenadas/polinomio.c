#include <stdio.h>
#include <stdlib.h>

typedef struct poli {
    float coef;
    int expo;
    struct poli *prox;
} *Poli;

Poli criar_termo(float c, int e, Poli p) {
    Poli novo = malloc(sizeof(struct poli));

    novo->coef = c;
    novo->expo = e;
    novo->prox = p;

    return novo;
}

void exibe_polinomio(Poli P) {
    if (P == NULL) return;

    printf("+%.1f", P->coef);

    if (P->expo != 0) printf("*x^%d", P->expo);

    return exibe_polinomio(P->prox);
}

// Função exibir feita por mim para teste
void exibe(Poli P) {
    while (P != NULL) {
        printf("+%.1f", P->coef);

        if (P->expo != 0) printf("*x^%d", P->expo);

        P = P->prox;
    }
}

void adt(float c, int e, Poli *P) {
    if (*P != NULL || (*P)->expo < e) {
        *P = criar_termo(c, e, *P);
    
    } else if ((*P)->expo == e) {
        (*P)->coef += c;

        if ((*P)->coef == 0) {
            Poli novo = *P;
            *P = novo->prox;

            free(novo);
        }
    
    } else adt(c, e, &(*P)->prox);
}
