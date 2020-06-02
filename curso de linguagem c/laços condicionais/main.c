#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int contador = 0;
    char c;

    do{
        contador = contador + 1;
        printf("\ndigite 0 para sair do looping\n");
        printf("%i quantidade de vezes que o looping foi executado", contador);
        c = getchar();

    }while(c != '0');


    return 0;
}
