#include <stdio.h>
#include <stdlib.h>

int main(){
   int i;

   printf("\t\tUsando o switch!!\n\n\n");
   printf("Digite um numero de 0 a 10 \n");
   scanf("%i", &i);
   switch(i){
    case 1:
       printf("Pq vc nasceu? \n");
       break;
    case 2:
       printf(" Filhote de xupa cabra \n");
       break;
    case 3:
       printf(" Seu maconheiro \n");
       break;
    case 4:
       printf(" Didier drogba' \n");
       break;
    case 5:
        printf(" vc e maluco e viado \n");
        break;
    case 6:
        printf("vc usa crack \n");
        break;
    case 7:
        printf("vc usa meta anfetamina \n");
        break;
    case 8:
        printf("vc usa lolo \n");
        break;
    case 9:
        printf("vc sonega imposto \n");
        break;
    case 10:
        printf("vc e uma pessoa linda \n");
        break;
    default:
        printf("opcao invalida");
        break;
   }



    return 0;
}
