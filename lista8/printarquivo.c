#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    char *texto [1000];
    file = fopen ("teste.txt", "r");
    if (file == NULL)
    {
        printf("\nerro");
    }
    else
    {
        printf("\nsucesso na abertura\n\n");
        fgets(texto, 1000, file);
        while (fgetc(file) != EOF)
        {
            printf("%s", texto);
            fgets(texto, 1000, file);
        }
        
        int linhas = strlen(texto);
        printf("\nnumero de linhas: %d", linhas);
    }
    fclose(file);
    return 0;
}