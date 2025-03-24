#include <stdio.h>

int main (){
    int i,j;
    int movimentoCima = 2;
    int movimentoEsquerda = 1;

    for ( i = 0; i < movimentoCima; i++)
    {
        printf("cima\n");
    }
    for ( j = 0; j < movimentoEsquerda; j++)
    {
        printf("Esquerda\n");
    }
    
   
    return 0;
    
}