#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i;

    printf("Digite um numero: \n");
    scanf("%i", &num);

    //if(num < 0)
    //    i = 0;
  //  else
//        i = num;


i = (num < 0) ? 0 : num;


    printf(" o numero resetado e: %i\n", i);

    return 0;
}
