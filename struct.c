#include <stdio.h>

int main(){

    struct Ponto{
        int x;
        int y;
    };

    //criar duas variaveis do tipo ponto
    struct Ponto p1, p2;

    p1.x=10;
    p1.y=20;
    p2.x=30;
    p2.y=40;
    
    printf("Ponto 1: (%d, %d\n)", p1.x, p1.y);
    printf("Ponto 1: %d bytes\n", sizeof(p1.x)+sizeof(p1.y));
    printf("Ponto 2: (%d, %d\n)", p2.x, p2.y);
    printf("Ponto 2: %d bytes\n", sizeof(p2.x)+sizeof(p2.y));

    return 0;
}