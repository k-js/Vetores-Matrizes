/******************************************************************************

Faca uma func¸ao que recebe como entrada um vetor de inteiros e o seu respectivo 
tamanho. A funcao deve ordenar o vetor de forma crescente

*******************************************************************************/


#include<stdio.h>

void ordemVetorCrescente (int tam, int v[tam]){
        
      int aux;
      for(int i=0; i<tam; ++i){
          for(int j=0; j<tam; ++j){
            if(v[i] < v[j]){
               aux = v[i];
               v[i] = v[j];
               v[j] = aux;
            }
         }
      }
}