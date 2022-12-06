#include <iostream>
#include <stack>

int main() {
    std::stack<int> pilha;

    pilha.push(7); // topo: 7
    pilha.push(2); // topo: 2
    pilha.push(8); // topo: 8
    pilha.push(5); // topo: 5
    pilha.push(6); // topo: 6
    std::cout << "Topo: " << pilha.top() << std::endl;

    pilha.pop();
    std::cout << "Topo: " << pilha.top();
    
    pilha.pop();
    std::cout << "Topo: " << pilha.top();
    
    std::cout << '\n';
}
