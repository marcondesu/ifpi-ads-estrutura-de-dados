#include "./lista_ordenada.c"

// Verifica se o item x está na lista
bool estaNaLista(Lista *l, ItemType x) {
    while (*l != NULL) {
        if ((*l)->item == x) {
            return true;
        }

        l = &(*l)->prox;
    }

    return false;
}

// Função a partir da inserir() que não insere caso o item já esteja na lista
void inserirSR(ItemType x, Lista *l) {
    if (estaNaLista(l, x)) return; // para a função caso x estiver na lista

    while (*l != NULL && (*l)->item < x) {
        l = &(*l)->prox;
    }

    *l = criar_no(x, *l);
}

int main() {
    Lista lista = NULL;
    
    inserirSR(1, &lista);
    inserirSR(7, &lista);
    inserirSR(2, &lista);
    inserirSR(1, &lista); // não adiciona
    inserirSR(2, &lista); // não adiciona

    exibir(lista);
}
