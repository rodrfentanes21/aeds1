#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *file = fopen("Faturamento.txt", "w");
    int linhas, l, c;
    double j;
    double total=0;
    char nome [150];
    printf("insira o numero de manicures:\n");
    scanf("%d", &linhas);
    double matriz[linhas][3];
    for (l = 0; l < linhas; l++)
    {
        for ( c = 0; c < 3; c++)
        {
            if (c==0)
            {
                total=0;
                printf("digite o nome da manicure\n");
                scanf("%s", &nome);
            }
            switch (c)
            {
            case 0:
                printf("quantos pes %s fez?\n", nome);
                scanf("%lf", &matriz[l][c]);
                j = matriz[l][c];
                total += j*15.00*0.3;
                break;
            case 1:
                printf("quantas maos %s fez?\n", nome);
                scanf("%lf", &matriz[l][c]);
                j = matriz[l][c];
                total +=  j*20.00*0.3;
                break;
            case 2:
                printf("quantas podologias %s fez?\n", nome);
                scanf("%lf", &matriz[l][c]);
                j = matriz[l][c];
                total += j*30.00*0.3;
                fprintf(file, "Nome: %s\nQuantia a receber: %lf\n", nome, total);
                break;
            }
        }
        
    }
    fclose(file);
    return 0;
}

