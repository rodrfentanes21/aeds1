#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int matriz[5][4];
    int soma1=0, soma2=0, soma3=0, soma4=0, soma5=0;
    for (int l = 0; l < 5; l++)
    {

        for (int c = 0; c < 4; c++)
        {
            printf("insira um numero\n");
            scanf("%d", &matriz[l][c]);
            int num = matriz[l][c];
            if (l == 0)
            {
                soma1 += num;
            }
            if (l == 1)
            {
                soma2 += num;
            }
            if (l == 2)
            {
                soma3 += num;
            }
            if (l == 3)
            {
                soma4 += num;
            }
            if (l == 4)
            {
                soma5 += num;
            }
        }
    }
    if (soma1 <=10)
    {
        soma1 = 0;
    }
    if (soma2 <=10)
    {
        soma2 = 0;
    }
    if (soma3 <=10)
    {
        soma3 = 0;
    }
    if (soma4 <=10)
    {
        soma4 = 0;
    }
    if (soma5 <=10)
    {
        soma5 = 0;
    }
    int vetor[5] = {soma1, soma2, soma3, soma4, soma5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", vetor[i]);
    }
    if (soma1 <= 10 && soma2 <= 10 && soma3 <= 10 && soma4 <= 10 && soma5 <= 10)
    {
        printf("\ntodas as somas sao menores que 10");
    }
    
    return 0;
}

