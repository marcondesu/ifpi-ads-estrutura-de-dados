#include "../Listas-Encadeadas/lista_encadeada.c"

void inserir(Lista l, ItemType x) {
    while((l != NULL) && (l->item < x)) {
        l = criar_no(x, l);
    }
    
    l = l->prox;
}
