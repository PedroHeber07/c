#include <stdio.h>
#include <stdlib.h>

int main(){
    // int i= 10 - (10 - 50);

    /*

    ==associa��o da esquerda para a diretia ==
    1) ()
    2) *, /, %
    3) + e -
    4) <, <=, >, >=
    5) ==, !=

    == associa��o da direita para a esquerda==
    1) --, ++
    2) =, +=,-=, *=, /=, %=

    */
    int a = 0;
    int b = 0;
    int c;
    int igual;

    igual = a = b = c=1;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);





    return 0;
}
