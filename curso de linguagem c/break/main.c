#include <stdio.h>
#include <stdlib.h>

int main(){


    //break interrompe o nosso ciclo
    //interrompe o la�o

    int i;

        for(i = 0; i <= 100; ++i){
            if (i == 20){ // interrompeu o la�o, por isso ele n�o imprimiu o 20
                continue;
            }
            if(i == 80){ // interrompeu a condi��o inteira por isso os numeros depois do 80 n�o foram impressos apesar de constarem na condi��o
                break;
            }
            printf("%i\n", i);
        }

    return 0;
}
