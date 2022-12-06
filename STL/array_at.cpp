#include <iostream>
#include <array>

int main() {
    std::array<int, 10> myarray;

    // Atribui alguns valores
    for (int i = 0; i < 10; i++) myarray.at(i) = i + 1;

    // Mostra conteúdo
    std::cout << "my array contains: ";

    for (int i = 0; i < 10; i++)
        std::cout << myarray.at(i);
    
    std::cout << '\n';
}
