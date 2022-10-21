#include "./lista_encadeada.c"

int ocorrencias(Lista l, ItemType x) {
    int quantidade;

    while (l != NULL) {
        if (l->item == x) {
            quantidade++;
        }

        l = l->prox;
    }

    return quantidade;
}

int main() {
    Lista lista = criar_no(3, criar_no(3, criar_no(5, NULL)));

    printf("Lista: ");
    exibir(lista);

    printf("\n\nO numero 3 apareceu " format " vezes na lista\n", ocorrencias(lista, 3));
}
