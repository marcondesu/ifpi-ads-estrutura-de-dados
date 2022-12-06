#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <vector>

int main() {
    int val;
    std::vector<int> my_vector;
    std::vector<int>::iterator iter;

    std::cout << "Digite alguns inteiros: " << std::endl;

    do {
        std::cin >> val;
        my_vector.push_back(val);
    } while (val != -1);

    std::cout << "\nIterator" << std::endl;
    for(iter = my_vector.begin(); iter != my_vector.end(); iter++)
        std::cout << *iter << std::endl;
    
    std::cout << "\nOperador randômico" << std::endl;
    // Acesso com o operador randômico
    for (int i = 0; i<my_vector.size(); i++)
        std::cout << my_vector[i] << std::endl;
}
