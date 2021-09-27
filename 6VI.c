
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main(void)
{
    int linhas = 5, colunas = 5;
    int matrizA[linhas][colunas];
    
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            matrizA[i][j] = 0 ;
            matrizA[1][1] = matrizA[1][2] = 1, matrizA[1][3] = 2;
            matrizA[2][1] = 3, matrizA[2][2] = 5 , matrizA[2][3] = 8;
            matrizA[3][1] = 13, matrizA[3][2] = 21 , matrizA[3][3] = 34;
        }
    }
    for(int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            printf("\t%d" , matrizA[i][j]);
        }
    printf("\n");
    }
    return 0;
}