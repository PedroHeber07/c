#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;

    printf("\t\t\t\t\tAprendendo comando if, part 2\n\n\n");
    printf("Digite um num entre 0 e 10\n");
    scanf("%i", &i);
    switch(i){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf(" o numero esta ente 0 e 5");
            break;
        case 6:
            printf("socorro");
            break;
        case 7:
            printf("socorro1");
            break;
        case 8:
            printf("socorro50");
            break;
        case 9:
            printf("socorro22");
            break;
        case 10:
            printf(" o numero esta entre 6 e 10");
            break;
        default:
            printf("numero incorreto");



    }

    return 0;
}
