#include<stdio.h>

void main (){
 int n1, n2,pf;
 float m;

 printf("Nota 1: ");
 scanf("%d",&n1);
 printf("Nota 2: ");
 scanf("%d", &n2);
 m = (float) (n1+n2)/2;
 printf("Media: %.1f", m);
 if (m>=6){
    printf("\nAluno aprovado!");
    }else{
        printf("\nAluno em prova final!");
            printf("Nota prova final: ");
            scanf("%d",&pf);
            m = (m+pf)/2;
            printf("Media final: %.1f", m);
                if (m>=6) {
                    printf("\nAluno aprovado!");
                }else{
                    printf("\nAluno reprovado!");
                }
 }
}
