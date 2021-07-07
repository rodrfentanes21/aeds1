#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char vetor [10];
    char dia [3];
    char mes[3];
    char ano[4];
    char datafinal [10];
    printf("insira a data no formato DD/MM/AAAA \n");
    scanf("%s", &vetor);
    strncpy(dia, vetor, 3);
    //strncpy(mes, vetor + 3, 3);
    //strncpy(ano, vetor + 6, 4);
    printf("%d", dia);
    return 0;
}