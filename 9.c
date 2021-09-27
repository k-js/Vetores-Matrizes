/******************************************************************************

9. Faca uma func¸ao que recebe como entrada tr ˜ es matrizes(A, B, e C) e o seu respectivo 
tamanho. A funcao deve somar as matrizes A e B e armazenar o resultado na matriz C.

*******************************************************************************/

#include<stdio.h>

void somaMatrizes(int matrizA[4][4], int matrizB[4][4], int matrizC[4][4]){
    int soma;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            soma = matrizA[i][j] + matrizB[i][j];
            matrizC[i][j] = soma; 
        }
    }
}