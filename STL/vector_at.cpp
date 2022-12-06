#include <iostream>
#include <vector>

int main() {
    std::vector<int> myvector (10); // 10 inteiros com valor zero

    // Atribui alguns valores
    for (unsigned i = 0; i < myvector.size(); i++)
        myvector.at(i) = i;

    std::cout << "myvector contains: ";

    for (unsigned i = 0; i < myvector.size(); i++)
        std::cout << myvector.at(i);

    std::cout << '\n';   
}
