#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char frase[100];
    char frasefinal[100];
    
    printf("insira a frase\n");
    gets(frase);
    int tamanho = strlen(frase);
    int j = 0;
    int i = 0;
    for ( i = 0 , j = 0; i < tamanho; i++, j++)
    {
   
        if (frase[i] >= '0' && frase[i] <= '9')
        {
            if (frase[i] == '1')
            {
               j = j + 1;
               frasefinal[j] = 'u';
               j = j + 1;
               frasefinal[j] = 'm';
            }
            if (frase[i] == '2')
            {
                j = j + 1;
               frasefinal[j] = 'd';
               j = j + 1;
               frasefinal[j] = 'o';
               j = j + 1;
               frasefinal[j] = 'i';
               j = j + 1;
               frasefinal[j] = 's';
            }
            if (frase[i] == '3')
            {
                j = j + 1;
               frasefinal[j] = 't';
               j = j + 1;
               frasefinal[j] = 'r';
               j = j + 1;
               frasefinal[j] = 'e';
               j = j + 1;
               frasefinal[j] = 's';
            }
            if (frase[i] == '4')
            {
                j = j + 1;
               frasefinal[j] = 'q';
               j = j + 1;
               frasefinal[j] = 'u';
               j = j + 1;
               frasefinal[j] = 'a';
               j = j + 1;
               frasefinal[j] = 't';
               j = j + 1;
               frasefinal[j] = 'r';
               j = j + 1;
               frasefinal[j] = 'o';
            }
            if (frase[i] == '5')
            {
                j = j + 1;
               frasefinal[j] = 'c';
               j = j + 1;
               frasefinal[j] = 'i';
               j = j + 1;
               frasefinal[j] = 'n';
               j = j + 1;
               frasefinal[j] = 'c';
               j = j + 1;
               frasefinal[j] = 'o';
            }
            if (frase[i] == '6')
            {
                j = j + 1;
               frasefinal[j] = 's';
               j = j + 1;
               frasefinal[j] = 'e';
               j = j + 1;
               frasefinal[j] = 'i';
               j = j + 1;
               frasefinal[j] = 's';
            }
            if (frase[i] == '7')
            {
                
                j = j + 1;
               frasefinal[j] = 's';
               j = j + 1;
               frasefinal[j] = 'e';
               j = j + 1;
               frasefinal[j] = 't';
               j = j + 1;
               frasefinal[j] = 'e';
            }
            if (frase[i] == '8')
            {
                j = j + 1;
               frasefinal[j] = 'o';
               j = j + 1;
               frasefinal[j] = 'i';
               j = j + 1;
               frasefinal[j] = 't';
               j = j + 1;
               frasefinal[j] = 'o';
            }
            if (frase[i] == '9')
            {
                j = j + 1;
               frasefinal[j] = 'n';
               j = j + 1;
               frasefinal[j] = 'o';
               j = j + 1;
               frasefinal[j] = 'v';
               j = j + 1;
               frasefinal[j] = 'e';
            }
            if (frase[i] == '0')
            {
                j = j + 1;
               frasefinal[j] = 'z';
               j = j + 1;
               frasefinal[j] = 'e';
               j = j + 1;
               frasefinal[j] = 'r';
               j = j + 1;
               frasefinal[j] = 'o';
            }
        }
        else
        {
         frasefinal[j+1] = frase[i];
        }
        
        
    }
    puts(frasefinal);
    return 0;
} 