#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("teste.txt", "w");
    char letra;
    int i=0;
    int x =feof(file);
    char texto [1000];
    printf("digite um texto, digite enter para sair \n");
    do{
        gets(texto);
        fputs(texto, file);
    }while (strlen(texto)>0);
    fclose(file);
}