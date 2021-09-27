
/******************************************************************************

10. Faca uma funcao que recebe como entrada uma matriz e o seu respectivo tamanho. A 
funcao deve imprimir a matriz na tela.

*******************************************************************************/

#include<stdio.h>

void ImprimeMatriz (int matriz[4][4]){
    int valor;
        for(int i=0; i<4; i++){
           for(int j=0; j<4; i++){
               valor = matriz[i][j];
               printf("\t%d", valor);
        }
     printf("\n");
    
   }
}

