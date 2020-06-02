#include<stdio.h>

void main(){
    const int FIM = 0;
    int num, cont = 0, soma = 0;
    float media = 0;

    printf("Digite um num.: ");
    scanf("%d", &num);
    while(num != FIM){
        soma = soma + num;
        cont++;
        printf("Digite um num.: ");
        scanf("%d", &num);
    }
    printf("\nSoma= %d", soma);
    media = (float) soma/cont;
    printf("\nMedia= %.1f", media);
}
