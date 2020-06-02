#include <stdio.h>
#include <stdlib.h>

int main(){


    //break interrompe o nosso ciclo
    //interrompe o laço

    int i;

        for(i = 0; i <= 100; ++i){
            if (i == 20){ // interrompeu o laço, por isso ele não imprimiu o 20
                continue;
            }
            if(i == 80){ // interrompeu a condição inteira por isso os numeros depois do 80 não foram impressos apesar de constarem na condição
                break;
            }
            printf("%i\n", i);
        }

    return 0;
}
