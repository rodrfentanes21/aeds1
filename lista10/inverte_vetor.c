#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int vetorOriginal [10];
    for (int i = 0; i < 10; i++)
    {
        printf("insira o %do numero \n", i+1);
        scanf("%d", &vetorOriginal[i]);
    }
    int i=0, aux=0, teste1, teste2;
    int vetorInvertido [10];
    for (i = 10; i > 0; i--, aux++)
    {
        vetorOriginal[i] = vetorInvertido [aux];   
    }
    printf("VETOR ORIGINAL \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vetorOriginal[i]);
    }
    printf("VETOR INVERTIDO \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vetorInvertido[i]);
    }
    return 0;
}