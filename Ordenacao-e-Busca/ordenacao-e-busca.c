#include <stdio.h>
#include <stdlib.h>
#define troca(a, b) { float x = a; a = b; b = x;}

// Consumo de tempo: T(n) = 3n + 4
// Soma dos itens de um vetor de tamanho N
int soma(int v[], int n) { // n -> tamanho do vetor
    int s = 0;
    int i = 0;

    while (i < n) {
        s += v[i];
        i++;
    }

    return s;
}

int crescente(int v[], int n) {
    int i = 0;
    
    while (i < n - 1) {
        if (v[i] < v[i + 1]) {
            return 0;
        }

        i++;
    }

    return 1;
}

void bubble_sort(int v[], int n) {
    for (int i = 1;  i <= n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(v[j], v[j + 1]);
            }
        }
    }
}

void mostrar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }
}

int seleciona(int v[], int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (v[i] < v[j]) {
            i = j;
        }
    }

    return i;
}

void selection_sort(int v[], int n) {
    while (n > 1) {
        troca(v[seleciona(v, n)], v[n - 1]);
        n--;
    }
}

void insere(int x, int v[], int n) {
    while (n > 0 && x < v[n - 1]) {
        v[n] = v[n - 1];
        n--;
    }

    v[n] = x;
}

void insertion_sort(int v[], int n) {
    for (int i = 0; i < n; i++) {
        insere(v[i], v, i);
    }
}

int main() {
    int vector[] = {46, 38, 50, 27, 19};
    bubble_sort(vector, 5);
    // selection_sort(vector, 5);

    mostrar(vector, 5);
}
