#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //essa biblioteca serve para mecher com funções relacionadas aos caracteres

int main(){
    char c;

    printf("Digite uma letra minuscula: ");
    scanf("%c", &c);

    if (c >= 'a'){
        printf("Segue sua letra em maiuscula: > %c <", toupper( c )); // a função touper e da biblioteca citada acima, onde torna a letra maiuscula
    }
    else {
        printf("Caractere invalido!!! :(  ");

        }





}
