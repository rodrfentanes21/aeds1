#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int matriz[4][3];
    int lin=0, col=0;
    int total;
    int maior=-999, menor=999;
    int pos1, pos2, pos3, pos4;
    for ( lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("insira um numero na matriz\n");
            scanf("%d", &matriz[lin][col]);
            int num = matriz [lin][col];
            total += num;
            if (num > maior)
            {
                maior = num;
                 pos1 = lin;
                 pos2 = col;
            }
            if (num < menor)
            {
                menor = num;
                 pos3 = lin;
                 pos4 = col;
            }
            
        }
    }
    printf("MATRIZ COMPLETA");
    for (lin = 0; lin < 4; lin++)
    {
        printf("\n");
        for (col = 0; col < 3; col++)
        {
            printf("%d", matriz[lin][col]);
        }
    }
    
    printf("o maior numero armazenado foi %d e sua posicao foi %d %d\n", maior, pos1, pos2);
    printf("o menor numero armazenado foi %d e sua posicao foi %d %d\n", menor, pos3, pos4);
    double media = (double)total/12;
    printf("a media dos numeros armazenados e: %lf", media);
    return 0;
}