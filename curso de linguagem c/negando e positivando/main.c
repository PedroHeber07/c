#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 10, num;

    printf("%i\n\n", i==1); // sentença falsa pois i não é igual a 1
    printf("%i\n\n", i!=1); // sentença verdadeira pois i não é igual 1
    printf("%i\n\n", !(i==1)); // anulando uma senteça falsa com a exclamação a frente dela, ela se orna verdadeira

    printf("Digite um numero diferente de 5: ");
    scanf("%i", &num);
     if (num!=5){
        printf("Numero correto");
     }
     else {
        printf("Numero incorreto, doidao!!");
     }
}

// o sinal de igual sozinho é uma atribuição
// o sinal de igual seguido de outro é uma comparação positiva ==
// o sinal de exclamação seguido de um sinal de igual é uma comparação negativa !=
