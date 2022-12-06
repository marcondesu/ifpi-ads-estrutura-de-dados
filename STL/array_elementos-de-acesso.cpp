#include <iostream>
#include <cstring>
#include <array>

int main() {
    std::array<int, 10> myarray;

    for (int i = 0; i < 10; i++) myarray.at(i) = i + 1;

    std::cout << myarray.begin() << '\n'; // iterator 
    std::cout << myarray.front() << '\n';
    std::cout << myarray.at(3) << '\n';
    std::cout << myarray.at(2) << '\n';
}
