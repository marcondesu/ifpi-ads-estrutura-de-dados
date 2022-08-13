#include <stdio.h>

int main() {
    int ms;
    float kmh;

    printf("km/h: ");
    scanf("%d", &ms);

    kmh = ms * 3.6;

    printf("%dm/s = %fkm/h", ms, kmh);
    
    return 0;
}
