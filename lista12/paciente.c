#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct pacientes
{
    int cod;
    char nome[150];
    char endereco [300];
    char telefone [20];
}pacientenovo;
typedef struct medicos
{
    char nome[150];
    char endereco [300];
    char telefone [20];
}mediconovo;
typedef struct consultas
{
    char nome[150];
    char endereco [300];
    char telefone [20];
}consultanova;

int main(void){
    srand(time(NULL));
    FILE *file = fopen("cliente.txt", "w");
    pacientenovo pac[1];
    for (int i = 0; i < 1; i++)
    {
        pac[i].cod = rand() % 10;
        printf("digite o nome do paciente: \n");
        scanf("%s", &pac[i].nome);
        printf("digite o endereco do paciente: \n");
        scanf("%s", &pac[i].endereco);  
        printf("digite o telefone do paciente: \n");
        scanf("%s", &pac[i].telefone);
        
        fprintf(file, "Codigo: %d\n", pac[i].cod);
        fprintf(file, "Nome: %s\n", pac[i].nome);
        fprintf(file, "Endereco: %s\n", pac[i].endereco);
        fprintf(file, "Telefone: %s\n", pac[i].telefone);
    }
    return 0;
}

