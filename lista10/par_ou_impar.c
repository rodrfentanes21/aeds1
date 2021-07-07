#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int vetor[6], j=0, k=0;
    for (int i = 0; i < 6; i++)
    {
        printf("\n insira um valor\n");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            j++;
            printf("\no numero %d e par", vetor[i]);
        }
        else
        {
            k++;
            printf("\no numero %d e impar", vetor[i]);
        }
    }
    printf("\nquantidade de numeros pares: %d", j);
    printf("\nquantidade de numeros impares: %d", k);
    return 0;
}