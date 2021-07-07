#include <stdio.h>

int main(void){
    FILE *file;
    int i=0;
    file = fopen("teste.txt", "r");
    while (feof(file) == 0)
    {
        if (fgetc(file) == 'a' || fgetc(file) == 'A')
        {
           i=i+1;
        }
        
    }
    printf("%d", i);
    fclose(file);
    return 0;
}