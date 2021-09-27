
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

void multiplicaVetor (int tam, int vetor[], int constant ){
    for (int i=0; i<tam; i++ ){
        vetor[i] = vetor[tam] * constant;
    }
}
 void imprimeVetor(int tam, int v[tam]){
     for(int  i=0; i<tam; i++){
         printf("%i\n" ,v[i]);
     }
 }

int main()
{
    int v[4];
    multiplicaVetor(4,v, 2);
    imprimeVetor(3, v);
    
    
    return 0;
}
