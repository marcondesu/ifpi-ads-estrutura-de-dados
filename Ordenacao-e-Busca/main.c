# include "./ordenacao-e-busca.c"

void bubble_real(float v[], int n) {
    for (int i = 1;  i <= n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(v[j], v[j + 1]);
            }
        }
    }
}
int main() {
    float vector[] = {46.1, 38.2, 50.3, 27.4, 19.575};
    bubble_real(vector, 5);
    // selection_sort(vector, 5);


    mostrar(vector, 5);
}