#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char vetor [99];
    char dia [99];
    char mes [99];
    char ano [99];
    char datafinal [99];
    fflush(stdin);
    printf("insira a data no formato DD/MM/AAAA \n");
    scanf("%s", vetor);
    strncpy(dia, vetor, 3);
    strncpy(mes, vetor + 3, 2);
    strncpy(ano, vetor + 6, 4);
    if (strcmp(mes, "01/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"janeiro/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
        
    }

    else if (strcmp(mes, "02/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"fevereiro/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "03/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"marco/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "04/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"abril/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "05/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"maio/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "06/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"junho/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "07/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"julho/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "08/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"agosto/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "09/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"setembro/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "10/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"outubro/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "11/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"novembro/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    
    else if (strcmp(mes, "12/"))
    {
        strcat(datafinal, dia);
        strcat(datafinal,"dezembro/");
        strcat(datafinal, ano);
        printf("%s", datafinal);
    }
    return 0;
}