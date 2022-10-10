#include <stdio.h>
#include <iostream>

using namespace std;

class Carro {
    public:
        string modelo;
        string marca;

        Carro() {}

        Carro(char x[23], string y) {
            modelo = x;
            marca = y;
        }
};

main() {
    Carro c1("uno", "fiat");
    cout << c1.modelo << endl;
    printf("%s", c1.marca);
}
