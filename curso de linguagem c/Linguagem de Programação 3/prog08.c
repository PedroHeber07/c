#include<stdio.h>

int subrot1(int x){

    x=10;
    printf("Eu sou um procedimento 1 -> %d\n", x);
}

void subrot2(int y, int w){

    printf("Eu sou um procedimento 2 -> %d %d\n", y, w);
}
void main() {
    int a=12;
    int b=22;

    subrot1(b);
    printf("Main -> %d\n", a);
    subrot2(a, b);
    printf("Main -> %d\n", a);
}
