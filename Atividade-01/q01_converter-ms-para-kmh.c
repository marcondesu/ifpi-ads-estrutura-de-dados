#include <stdio.h>

/*
Proposta: 
   Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6).
*/

int main() {
    int ms;
    float kmh;

    printf("km/h: ");
    scanf("%d", &ms);

    kmh = ms * 3.6;

    printf("%dm/s = %fkm/h", ms, kmh);
    
    return 0;
}
