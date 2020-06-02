#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int tabuada = 0;


    printf("\t\t\t\tPrograma tabuada: \n");
    printf("Digite a tabuada que deseja: \n");
    scanf("%i", &tabuada);

    for(x = 1; x <= 10; ++x){ //x aqui é o contador
            // 1 x 5 = 5
        printf("%ix%i = %i\n", x, tabuada, x*tabuada);
    }




    return 0;
}
