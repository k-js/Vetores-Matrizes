
/******************************************************************************

3. Crie um programa que armazene 10 numeros em um vetor A, e gere um vetor B onde ´
cada elemento e o quadrado do elemento de A

*******************************************************************************/

#include <stdio.h>

int main() {
    
    int i, vetorA[10], vetorB[10];

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    for(i = 0; i < 10; i++){
        vetorB[i] = vetorA[i] * vetorA[i];
    }
    
    printf("\nVetor A: ");
    for(i = 0; i < 10; i++){
        printf("%3d ", vetorA[i]);
    }

    printf("\nVetor B: ");
    for(i = 0; i < 10; i++){
        printf("%3d ", vetorB[i]);
    }

    return 0;
}