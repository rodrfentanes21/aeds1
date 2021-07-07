#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int n, j=0, k=0;
    printf("insira o tamanho do vetor\n");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        printf("insira o %do numero do vetor\n", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0)
        {
            j++;
        }
        else if (vetor[i] < 0)
        {
            k++;
        }
    }
    for (int a = 0; a < n; a++)
    {
        printf("\n%do valor do vetor: %d", a+1, vetor[a]);
    }
    
    printf("\nnumeros positivos: %d", j);
    printf("\nnumeros negativos: %d", k);
    return 0;
}