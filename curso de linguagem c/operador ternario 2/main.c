#include <stdio.h>
#include <stdlib.h>

int main(){
    char caracetere = 0 ;
    int codigo = 0;
    printf("Digite uma letra a a g:  ");
    scanf("%c", &caracetere);

    switch(caracetere){
        case 'A':
            codigo = 65;
            break;
        case 'B':
            codigo = 66;
            break;
        case 'C':
            codigo = 67;
            break;
        case 'D':
            codigo = 68;
            break;
        case 'E':
            codigo = 69;
            break;
        case 'G':
            codigo = 70;
            break;
        default:
            codigo = -1;

            // tambem pode ser representado assim

            // switch (caractere){
            //  codigo =  (caractere == 'A') ? 65 :
            //            (caractere == 'B') ? 66 :
                 //       (caractere == 'C') ? 67 :
               //         (caractere == 'D') ? 68 :
             //           (caractere == 'E') ? 69 :
           //             (caractere == 'F') ? 70 :
           //             (caractere == 'G') ? -1 :


    }

    printf(" O codigo ascII do caracetere digitado e: %i", codigo);

    return 0;
}
