#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int val;
    vector<int> my_vector;
    
    cout << "Digite valores" << endl;

    do {
        cout << "> ";
        scanf("%d", &val);
        my_vector.push_back(val); // insere valor de val ao final do vetor
    } while (val != -1);

    for (unsigned i = 0; i < my_vector.size(); i++)
        cout << my_vector.at(i);

    cout << '\n'; 
}
