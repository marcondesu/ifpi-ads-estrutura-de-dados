#include <iostream>

int caracter(char c, char s[]) {
    if (s[0] == '\0')
        return 0;
    
    if (s[0] == c)
        return (1 + caracter(c, ++s));
    
    return caracter(c, ++s);
}

int main() {
    char s[] = {2, 7, 7, 8, 1, 0, 3};

    std::cout << caracter(7, s) << std::endl;
}
