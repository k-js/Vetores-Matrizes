
/******************************************************************************
6. Imprima as seguintes matrizes na tela:
ii)
*******************************************************************************/

#include<stdio.h>

int main(void)
{
    int linhas = 5, colunas = 5;
    int matrizA[linhas][colunas];
    int cont = 1;
    
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            matrizA[i][j] =  cont;
            cont++;
                    
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
