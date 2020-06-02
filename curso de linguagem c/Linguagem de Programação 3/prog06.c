#include<stdio.h>

void main(){
    const int FIM = -1;
    int nota, notas[50];
    int cont = 0, soma = 0, i;
    float media;

    printf("Digite uma nota: ");
    scanf("%d", &nota);
    while (nota != FIM){
        notas[cont] = nota; //armazena a nota no vetor
        cont++;
        printf("Digite uma nota: ");
        scanf("%d", &nota);
    }
    for (i=0; i<cont; i++){
        soma = soma + notas[i];
    }
    printf("Soma= %d", soma);
    media = (float) soma/cont;
    printf("\nMedia= %0.1f\n", media);

    for (i=0; i<cont; i++){
        if (notas[i] >= media){
            printf("Nota= %d\n", notas[i]);
        }
    }
}
