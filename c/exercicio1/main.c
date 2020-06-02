#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;


    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("\n O numero escolhido foi: %d \n", num1);
    if((num1 % 5 == 0) && (num1 % 3 == 0)){
        printf("\nEsse numero e divisivel por 5 e 3");
    }else{
        printf("\n Esse numero nao e divisivel por 5 e 3 \n");
    }

    return 0;
}
