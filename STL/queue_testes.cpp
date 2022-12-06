#include <iostream>
#include <queue>

int main() {
    std::queue<int> fila;
    fila.push(7); // frente: 7 | trás: 7
    fila.push(2); // frente: 7 | trás: 2
    fila.push(5); // frente: 7 | trás: 5
    fila.push(6); // frente: 7 | trás: 6
    std::cout << "Frente: " << fila.front() << std::endl;
    std::cout << "Trás: " << fila.back() << std::endl;

    // Remove o elemento da frente
    fila.pop(); // frente: 2 | trás: 6
    std::cout << "\nFrente: " << fila.front() << std::endl;
    std::cout << "Trás: " << fila.back() << std::endl;

    fila.pop(); // frente: 5 | trás: 6
    std::cout << "\nFrente: " << fila.front() << std::endl;
    std::cout << "Trás: " << fila.back() << std::endl;

    fila.push(15);
}
