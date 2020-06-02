#include<stdio.h>

void main(){
    int nota;

    do{
        printf("Nota: ");
        scanf("%d", &nota);
        if ((nota<1) || (nota>10)){
            printf("Nota invalida\n");
        }
    } while ((nota<0) || (nota>10));

}
