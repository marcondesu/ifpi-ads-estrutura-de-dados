#include <iostream>
#define troca(a, b) {int x = a; a = b; b = x; }

using namespace std;

void empurra(int vetor[], int n) {
    for(int i = 0; i < n; i++) {
            if(vetor[i] > vetor[i+1]) {
                troca(vetor[i], vetor[i+1]);
            }
        } 
}

void bubbleSort(int vetor[], int n) {
    if(n == 0) return;
    else {
        empurra(vetor, n);
        bubbleSort(vetor, n-1);
    }
}


int main() {
    int numeros[] = {2, 9, 5, 8, 21, 3, 7, 3, 0};
    bubbleSort(numeros, 8);
    for(int i = 0; i < 9; i++) {
        cout << numeros[i] << endl;
    }
}
