#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int vetor[30], min=40, max=0;
    int soma=0, media, inf=0;
    for (int i = 0; i < 30; i++)
    {
        printf("insira a temperatuda no %do dia\n", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] < 15 || vetor[i] > 40)
        {
            printf("\nnumero invalido");
            return -1;
        }
        if (vetor[i] < min)
        {
            min = vetor[i];
        }
        if (vetor[i] > max)
        {
            max = vetor[i];
        }
        soma = soma + vetor[i];
    }
    media = soma/30;
    printf("a menor temperatura ocorrida foi: %d\n", min);
    printf("a maior temperatura ocorrida foi: %d\n", max);
    for (int a = 0; a < 30; a++)
    {
        if (vetor[a] < media)
        {
            inf++;
        }
    }
    printf("numero de dias onde a temperatura foi inferior a media: %d\n", inf);
    return 0;
}