#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    printf("\nDigite o numero 1: \n");
    char c;
    c = getchar();

    if(c == '1'){
        printf("\nvc digitou corretamente\n");
    }else{
        printf("\no numero que vc digitou e invalido!\n");
        printf("\n vc digitou o numero: %c\n", c);
    }






    return 0;
}
