#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(){
    float num1, num2, result;
    char op = 0;



    printf("\t\tBem vindo a calculadora 2.0!!\n");

    do{
        num1 = num2 = result = 0;
        printf("\nDigite qual operacao deseja: \n");
        printf("\n(1) para soma\n");
        printf("\n(2) para subtracao\n");
        printf("\n(3) para divisao\n");
        printf("\n(4) para multiplicacao\n");
        printf("\n(0) para sair do programa\n");
        printf("\n");
        op = getche(); //n�o precisa dar enter com esse comando, diferente do getchar
        printf("\n");

            if(op!= '0' ){
            printf("\nDigite o primeiro numero:\n");
            scanf("%f", &num1);
            printf("\nDigite o segundo numero:\n");
            scanf("%f", &num2);
            }

            if (op == '1'){
                result = num1 + num2;
                printf("\n A soma dos numeros e: %0.1f\n", result);
                    }else if (op == '2'){
                    result = num1 - num2;
                    printf("\n A subtracao dos numeros e: %0.1f\n", result);
                        }else if(op == '3'){
                        result = num1 / num2;
                        printf("\n A divisao dos numeros e: %0.1f\n", result);
                            }else if(op=='4'){
                            result = num1*num2;
                            printf("\n A multiplicao dos numeros e: %0.1f\n", result);

                            }
                    system("Pause"); //pausar a tela
                    system("cls"); // limpar a tela

    }while(op != '0');








    return 0;
}