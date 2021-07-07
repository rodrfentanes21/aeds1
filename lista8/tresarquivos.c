#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    FILE *file1 = fopen("teste1.txt", "r");

    FILE *file3 = fopen("teste.txt", "w");

    char t1 [999];
    char t2 [999];

    fgets(t1, 999, file1);
    
    while(fgetc(file1) != EOF){
        fputs(t1, file3);
        fgets(t1, 999, file1);
    } 

    FILE *file2 = fopen("teste2.txt", "r");

    fgets(t2, 999, file2);
    

    while(fgetc(file2) != EOF){
        fputs(t2, file3);
        fgets(t2, 999, file2);
    } 

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
} 