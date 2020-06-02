#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y;
    printf("Digite um numero: \n");
    scanf("%d", &x);

    if(x < 1){
        y = x;
    } else if( x == 1 ){
        y = 0;
    } else if(x > 1){
        y = pow(x,2);
    }

    printf("O numero resultante foi: %d\n", y);


// obs quando os numeros possuem dois algarismos peede-se uma unidade
    return 0;
}
