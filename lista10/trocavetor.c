#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char vetorA[20];
    char vetorB[20];
    int i=0;
    int j=20;
    printf("bata a cabeca no teclado\n");
    scanf("%s", vetorA);
    printf("denovo\n");
    scanf("%s", vetorB);
    printf("\nANTES DA TROCA\n");
    printf("%s", vetorA);
    printf("%s", vetorB);
    char vetorAdps[20];
    char vetorBdps[20];
    printf("\nTROCANDO\n");
    for (i = 0;  i < 20; i++, j--)
    {
        vetorBdps[i] = vetorA[j];
        vetorAdps[i] = vetorB[j];
    }
    printf("\nDEPOIS DA TROCA\n");
    printf("%s \n", vetorAdps);
    printf("%s \n", vetorBdps);
    return 0;
}