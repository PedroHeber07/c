#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 10, num;

    printf("%i\n\n", i==1); // senten�a falsa pois i n�o � igual a 1
    printf("%i\n\n", i!=1); // senten�a verdadeira pois i n�o � igual 1
    printf("%i\n\n", !(i==1)); // anulando uma sente�a falsa com a exclama��o a frente dela, ela se orna verdadeira

    printf("Digite um numero diferente de 5: ");
    scanf("%i", &num);
     if (num!=5){
        printf("Numero correto");
     }
     else {
        printf("Numero incorreto, doidao!!");
     }
}

// o sinal de igual sozinho � uma atribui��o
// o sinal de igual seguido de outro � uma compara��o positiva ==
// o sinal de exclama��o seguido de um sinal de igual � uma compara��o negativa !=
