#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int vetor[30], min=999, max=0, sett=0;
    int soma=0, media;
    for (int i = 0; i < 30; i++)
    {
        printf("insira o peso %do aluno\n", i+1);
        scanf("%d", &vetor[i]);
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
    printf("o aluno de menor peso foi: %d\n", min);
    printf("o aluno de maior peso foi: %d\n", max);
    for (int a = 0; a < 30; a++)
    {
        if (vetor[a] > 70)
        {
            sett++;
        }
    }
    printf("numero de alunos que pesam mais de 70kg: %d\n", sett);
    return 0;
}