#include<stdio.h>

    int matriz1[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int matriz2[4][3] = { {13,14,15}, {16,17,18}, {19,20,21}, {22,23,24} };
    int soma[4][3] = { 0 };

void mostraMatriz1(){
    int i,j;

    for (i = 0; i < 4; i++){
        for (j = 0; j<3; j++){
            printf("%3d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void mostraMatriz2(){
    int i,j;

    for (i = 0; i < 4; i++){
        for (j = 0; j<3; j++){
            printf("%3d ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void somaMatrizes(){
    int i,j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++ ){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
void mostraMatriz3(){
    int i,j;

    for (i=0; i<4; i++){
        for (j=0; j<3; j++){
            printf("%3d", soma[i][j]);
        }
        printf("\n");
    }
}
void main(){


    mostraMatriz1();
    mostraMatriz2();
    somaMatrizes();
    mostraMatriz3();
}
