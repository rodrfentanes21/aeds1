#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char leitor[50];
    char matricula [50];
    char telefone [50];
    char nome[50];
    int opt;
    int alunos=0;
    FILE *file = fopen("teste.txt", "w+");
    printf("digite o numero de alunos\n");
    scanf("%d", &alunos);
    for (int i = 0; i < alunos; i++)
    {
        printf("Informe a matricula\n");
        scanf(" %s", matricula);
        printf("Informe o telefone\n");
        scanf(" %s", telefone);
        printf("Informe o primeiro nome\n");
        scanf(" %s", nome);
    
        
        fputs(matricula, file);
        fprintf(file, "\n");
        fputs(telefone, file);
        fprintf(file, "\n");
        fputs(nome, file);
        fprintf(file, "\n");
    }
    fclose(file);
    fopen("teste.txt", "r");
    printf("se quer ver as informacoes inseridas digite 1, caso contrario digite 0\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        fgets(leitor, 50, file);
        while (fgetc(file) != EOF)
        {
            printf("%s", leitor);
            fgets(leitor, 50, file);
        }
        break;
    case 0:
        printf("programa encerrado\n");
        break;
    default:
        printf("opção invalida");
        break;
    }
    fclose(file);
    return 0;
}