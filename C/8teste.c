
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

void ordemVetorCrescente (int tam, int v[tam], int num){
    
    int aux;
    
     for(int  k=0; k<tam; k++){
         for(int  i=0; i<num; i++){
            for(int j=0; j<num; j++){
                
                if(v[i] > v[j]){
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
             }
        }
    }
}

void imprimeVetor(int tam, int v[tam] , int n){
     for(int  i=0; i<tam; i++){
         for(int  j=0; j<n; j++) 
         printf("%i\n" ,v[i]);
     }
 }

int main()
{
    int vetor[5] ;
    ordemVetorCrescente(5, vetor, 1);
    imprimeVetor(5, vetor, 1);
    return 0;
}

