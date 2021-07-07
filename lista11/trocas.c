#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int matriz[10][10];
    int matriz2[10][10];
    int l, c;
    for (l = 0; l < 10; l++)
    {
        for (c = 0; c < 10; c++)
        {
            printf("insira um numero\n");
            scanf("%d", &matriz[l][c]);
            matriz2[l][c] = matriz[l][c];
        }
        
    }
    printf("\nMATRIZ ANTES DAS TROCAS");
    for (l = 0; l < 10; l++)
    {
        printf("\n");
        for (c = 0; c < 10; c++)
        {
            printf("%d", matriz[l][c]);
        }
    }
    
    //linhas
    for (c = 0; c < 10; c++)
    {
        matriz2[7][c] = matriz[1][c];
        matriz2[1][c] = matriz[7][c];
    }
    
    //diagonais
    for (l = 0; l < 10; l++)
    {
        matriz2[l][10 - 1 - l]= matriz[l][l];
        matriz2[l][l] = matriz[l][10 - 1 - l];
    }
    
    printf("\nMATRIZ DEPOIS DAS TROCAS");
    for (l = 0; l < 10; l++)
    {
        printf("\n");
        for (c = 0; c < 10; c++)
        {
            printf("%d", matriz2[l][c]);
        }
    }
    return 0;
}
