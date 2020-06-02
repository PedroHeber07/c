#include<stdio.h>

void main(){
    int i, num;
    float media=0, soma=0;
    const int fim=0;

    printf("Digite um numero: ");
    scanf("%d ", &num);
    while (num != fim){
        soma = soma+num;
        printf("Digite um numero: ");
        scanf("%d ", &num);
    }
    printf ("\nSoma= %d", soma);
    printf ("Media= %.1f", media);
}
