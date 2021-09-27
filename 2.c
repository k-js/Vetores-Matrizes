/******************************************************************************

2. Crie um programa que armazene numeros em dois vetores inteiros de cinco elementos ´
cada, depois gere e imprima o vetor soma dos dois

*******************************************************************************/
#include<stdio.h>


int main(){
    
    int A[5], B[5], soma[5], i;
    soma[5]=0;

    printf("Digite 5 numeros para [A] e 5 para [B]:\n");
    
    for(i=1; i<=5; i++){
    
       printf("A[%d]:",i);
       scanf("%d",&A[i]);
       printf("B[%d]:",i);
       scanf("%d",&B[i]);
        
       soma[i]=A[i]+B[i];
    }
    printf("A soma entre A+B :\n");
    
    for(i=1; i<=5; i++){
        printf("A[%d]+B[%d]= %d\n",i,i,soma[i]);
     
    }
    return 0;
    
}