#include <stdio.h>

int main(){

    struct Ponto{
        int x;
        int y;
    };

    struct Retangulo{
        struct Ponto p1;
        struct Ponto p2;
    };

    //pontos dos 4 pontos que formam o triangulo no plano cartesiano
    struct Retangulo r1;
    r1.p1.x=10; //p1(x, y) = (10, 20)
    r1.p1.y=20;
    r1.p2.x=10;
    r1.p2.y=20;


    printf("Retangulo 1: Ponto 1: (%d, %d)\n", r1.p1.x, r1.p1.y);
    printf("Retangulo 2: Ponto 2: (%d, %d)\n", r1.p2.x, r1.p2.y);

    return 0;
}