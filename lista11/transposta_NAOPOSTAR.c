#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//TA ERRADO ESSA PORRA MAS TO COM PREGUIÇA
int main(void){
    int linhas, colunas;
    printf("insira o numero de linhas\n");
    scanf("%d", &linhas);
    printf("insira o numero de colunas\n");
    scanf("%d", &colunas);
    int matrizA[linhas][colunas];
    int matrizT[colunas][linhas];
    int lin=0, col=0;
    int lin1=0, col1=0;
    for ( lin = 0; lin < linhas; lin++)
    {
        for (col = 0; col < colunas; col++)
        {
            printf("insira um numero\n");
            scanf("%d", &matrizA[lin][col]);
        }
    }
    printf("MATRIZ A");
    for (lin = 0; lin < linhas; lin++)
    {
        printf("\n");
        for (col = 0; col < colunas; col++)
        {
            printf("%d", matrizA[lin][col]);
        }
    }
    for (lin1 = 0, lin=0; lin1 < colunas; lin1++, lin++)
    {
        for (col1 = 0,col =0; col1 < linhas; col1++, col++)
        {
            matrizT [lin1][col1] = matrizA[col][lin];
        }
        
    }
    printf("\nMATRIZ T");
    for (lin1 = 0; lin1 < colunas; lin1++)
    {
        printf("\n");
        for (col1 = 0; col1 < linhas; col1++)
        {
            printf("%d", matrizA[lin1][col1]);
        }
    }
    return 0;
}

