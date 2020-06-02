#include<stdio.h>

void main(){
    int vet[10] = {0}, i, num, soma = 0;
    float media;

    for (i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        vet[i] = num;
    }
    for (i=0; i<10; i++){
       soma=soma+vet[i];
    }
     printf("%d\n", soma);
     media= soma/10;
     printf("Media: %.1f", media);
}
