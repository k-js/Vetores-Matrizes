/******************************************************************************
4. Escreva um programa que leia uma string qualquer s e produz como saıda a string
inversa de str. Se a inversa de str for igual a s o programa deve informar que a string lida
e um PALINDROMO
*******************************************************************************/

#include <stdio.h>
#include <string.h>

    int main(){
    char string[100], stringInverso[100];
    int i, j = 0;
  
    printf("Digite um texto: ");
    scanf("%s",string);
    printf("o tamanho e %ld \n", strlen(string));
    
    for(i=strlen(string)-1; i>=0; i--){
        stringInverso[j] = string[i];
        j++;
    }
    stringInverso[j] = '\0';
    printf("o inverso e: %s \n", stringInverso);
    
    if(strcmp(string, stringInverso) == 0){
        printf("E palindromo");
    }
    else{
        printf("Nao e palindromo");
    }
  
    return 0;       
}