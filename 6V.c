
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main(void)
{
    int linhas = 5, colunas = 5;
    int matrizA[linhas][colunas];
    
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            matrizA[i][j] = 0 ;
            matrizA[0][4]= 1;
            matrizA[1][3] = 1;
            matrizA[2][2] = 1;
            matrizA[3][1] = 1;
            matrizA[4][0] = 1;
            
        }
    }
    for(int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            printf("%d" , matrizA[i][j]);
        }
    printf("\n");
    }
    return 0;
}