#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade_jovem = 17, idade_idoso = 60, idade = 0;

    printf("Programa que indica se vc e uma pessoa idosa, jovem ou de meia idade!! \n\n\n");
    printf("Digite a idade: \n\n");
    scanf("%i", &idade);

    if(idade >= idade_idoso){
        printf("\n\nA pessoa esta na terceira idade!!\n\n");
    }else{
        if(idade <= idade_jovem){
            printf(" \n\nA pessoa e jovem!!\n\n");
        }else{
            if((idade > idade_jovem)&&(idade < idade_idoso)){  // nesse caso usou-se o && por para que faz com que para que seja verdadeiro as duas condções sejam verdadeiras
                                                                // se usassemos o || precisaria que apenas uma das condições fosse verdade para a sentença for verdade, essa || significa ou.
                printf("\n\nA pessoa esta na meia idade!!\n\n");
            }


        }

    }

}
