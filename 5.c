
/******************************************************************************
5. Escreva um programa para ler 9 numeros inteiros para preencher uma matriz M (3x3). A ´
seguir, ler um numero inteiro x e escrever uma mensagem indicando se o valor de x existe ´
ou nao na matriz M. 

*******************************************************************************/

#include <stdio.h>

    int main(){
    int matriz[3][3];
   
    int i,j, numero;
    printf("Digite 9 numeros para a pesquisa da matriz M 3X3: \n");
       
    for(i=0; i<3; i++){
       for(j=0; j<3; j++){
          scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           printf("\t%d",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\ndigite um numero a ser pesquisado na matriz: ");
    scanf("%d",&numero);
    
    for(i=0; i<1; i++){
       for(j=0; j<3; j++){
          if (numero==matriz[i][j]){
          printf("O numero %d existe na matriz 3X3 :", numero);
          }
        }
        printf("O numero %d nao existe na matriz 3X3", numero);
    }
    return 0;
    }

