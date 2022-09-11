#include "pilha1.c"

void show_menu() {
    printf("\n1 - Ver pilha\n2 - Ver topo\n3 - Empilhar\n4 - Desempilhar\n");
}

void show_pilha(Pilha *p) {
    printf("# Pilha: %s\n", p->vetor);
}

int main() {
    int opcao;
    int tamanho;

    char valor;

    printf("Tamanho da pilha: ");
    scanf("%d", &tamanho);

    Pilha *pilha = criar_pilha(tamanho);
    limpar_pilha(pilha);

    show_menu();
    printf("\n> ");
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            show_pilha(pilha);
        }
        else if (opcao == 2) {
            printf("# Topo: %d\n", getTopo(pilha));
        }
        else if (opcao == 3) {
            printf("Valor a ser empilhado: ");
            scanf("%s", &valor);

            push(pilha, valor);
        }
        else if (opcao == 4) {
            printf("Valor desempilhado: %c\n", pop(pilha));
        }

        show_menu();
        printf("\n\n> ");
        scanf("%d", &opcao);
    }
}
