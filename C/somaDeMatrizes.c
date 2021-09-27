
// Online IDE - Code Editor, Compiler, Interpreter

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

void leiaMatriz(int matriz[4][4]){
    int valor;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
        printf("[%d][%d]:", i, j);
        scanf("%d",&valor);
        matriz[i][j] = valor; 
        }
    }
}

int main(void)
{
    int a[4][4], b[4][4], c[4][4];
    int valor; 

    printf("Insiras os valores para Matriz A ");
    leiaMatriz(a);
    
    printf("Insiras os valores para Matriz B ");
    leiaMatriz(b);
    
    somaMatrizes(a,b,c);
    
    printf("Matriz C \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
        valor = c[i][j];
        printf("%d" , valor);
        }
        printf("\n");
    }
    return 0;
}
