#include "./lista_encadeada.c"

int main() {
    Lista lista = criar_no(3, criar_no(3, criar_no(5, NULL)));

    exibir(lista);

    printf("\n\nTamanho: " format, tamanho(lista));
}
