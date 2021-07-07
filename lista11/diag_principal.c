#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int matriz[4][4];
    int lin=0, col=0;
    int diag0=0, diag1=0, diag2=0, diag3=0;
    int soma=0;
    for ( lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("insira um numero\n");
            scanf("%d", &matriz[lin][col]);
            if (lin == col)
            {
                if (lin == 0)
                {
                    diag0 = matriz[lin][col];
                }
                if (lin == 1)
                {
                    diag1 = matriz[lin][col];
                }
                if (lin == 2)
                {
                    diag2 = matriz[lin][col];
                }
                if (lin == 3)
                {
                    diag3 = matriz[lin][col];
                }
            }
            else if (col > lin)
            {
                int num = matriz[lin][col];
                soma += num;
            }
        }
    }
    printf("a diagonal principal e: %d %d %d %d\n", diag0, diag1, diag2, diag3);
    printf("a soma dos numeros abaixo da diagonal principal e: %d", soma);
    return 0;
}

