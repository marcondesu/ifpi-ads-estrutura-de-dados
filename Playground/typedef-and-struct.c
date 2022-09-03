#include <stdio.h>
#include <string.h>

/*
    unsigned serve para determinar que um tipo numérico é inteiro e sem sinal
    Determina se o bit mais significativo será considerado o sinal de positivo ou negativo ou se este bit entrará no valor, por isso ele permite o dobro dos valores permitidos

    int: -2147483648 a 2147483647
    unsigned int: 0 a 4294967295
*/

typedef unsigned int UINT64;

struct Person {
    int idade;
    int numero_da_sorte;
};

typedef struct Person PersonDatatype;

/*
typedef struct person {
    int idade;
    int numero_da_sorte;
} Person;
*/

int main() {
    // ### typedef
    UINT64 integer64 = 13;

    printf("%d", integer64); // 13

    // ### struct
    struct Person obama;

    obama.idade = 61;
    obama.numero_da_sorte = 4;

    printf("\n%d\n%d", obama.idade, obama.numero_da_sorte);

    // ### typedef struct
    PersonDatatype bob;

    bob.idade = 25;
    bob.numero_da_sorte = 1;

    printf("\n%d\n%d", bob.idade, bob.numero_da_sorte);
}
