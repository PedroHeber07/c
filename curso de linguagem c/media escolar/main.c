#include <stdio.h>
#include <stdlib.h>

void main(){
    float nota1, nota2,nota3, nota4, media;

    printf("Bem vindo ao Programa de calcular media anual dos alunos!!!\n\n");
    printf("Digite a media do primeiro bimestre; \n\n");
    scanf("%f", &nota1);
    printf("Digite a media do segundo bimestre; \n\n");
    scanf("%f", &nota2);
    printf("Digite a media do terceiro bimestre; \n\n");
    scanf("%f", &nota3);
    printf("Digite a media do quarto bimestre; \n\n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf(" A nota do aluno e: %0.1f\n\n", media);

    if (media <7){
        printf("Aluno em prova final\n\n");
    }

    else {
        printf("Aluno Aprovado!!\n\n");
    }
}
