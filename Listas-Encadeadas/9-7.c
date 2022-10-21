#include "./lista_encadeada.c"

bool igual(Lista a, Lista b) {
    while (a != NULL) {
        if (!a->item == b->item) {
            return false;
        }

        a = a->prox;
        b = b->prox;
    }

    return true;
}

int main() {
    Lista i = criar_no(3, criar_no(3, criar_no(5, NULL)));
    Lista j = criar_no(3, criar_no(3, criar_no(5, NULL)));
    Lista k = criar_no(0, criar_no(0, criar_no(5, NULL)));

    printf("Lista i: ");
    exibir(i);
    printf("\nLista j: ");
    exibir(j);
    printf("\nLista k: ");
    exibir(k);

    printf("\n\nigual(i, j): %d", igual(i, j));
    printf("\nigual(i, k): %d", igual(i, k));
}
