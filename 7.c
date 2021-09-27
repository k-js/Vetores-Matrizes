
/******************************************************************************

Faca uma funcao que recebe como entrada um vetor de inteiros e o seu respectivo 
tamanho. A funcao deve retornar o maior numero inteiro do vetor

*******************************************************************************/


#include<stdio.h>

int maiorVetor (int tam, int vet[tam] ){
    int maior = vet[0];
    for (int i=0; i<tam; i++ ){
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

