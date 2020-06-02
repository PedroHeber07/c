#include<stdio.h>

void main(){
    const int MAX=10;
    int i;

    for(i=1; i<=MAX; i++){
        printf("%d ", i);
    }

    printf("\n");
    i=1;
    while (i<=MAX){
        printf("%d ", i);
        i++;
    }
}
