/******************************************************************************

1.A organizacao de um evento esportivo deseja um programa que fac¸a a leitura do nome e ˜
a pontuacao de cada um dos 10 participantes e exiba o nome do vencedor. Elabore este ˜
programa
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    float pontuacao ;
    float maiorPontuacao;
    char vencedor[20];
    maiorPontuacao = pontuacao;
    
    for (int i=0; i<10; i++){
         printf("Digite o nome do participante! \n");
         scanf("%s",nome);
         printf("Digite a pontuacao do participante!\n");
         scanf("%f", &pontuacao);
        
        if (pontuacao > maiorPontuacao){
             strcpy(vencedor, nome);
             maiorPontuacao = pontuacao;
        }
    }
        printf("\nO vencedor é: %s!",vencedor);
}



