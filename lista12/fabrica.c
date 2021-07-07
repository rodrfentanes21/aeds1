#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct meses
{
    int Janeiro;
    int Fevereiro;
    int Marco;
    int Abril;
    int Maio;
    int Junho;
    int Julho;
    int Agosto;
    int Setembro;
    int Outubro;
    int Novembro;
    int Dezembro;
};

int main(void){
    int lucrototal=0;
    int l=0, c=0;
    char motor;
    int m1 [2][12];
    int m2 [2][2];
    for (c = 0; c < 2; c++)//for da m2
    {
        for (l = 0; l < 2; l++)
        {
           if (l==0)
           {
               printf("insira o custo do motor %d\n", c+1);
               scanf("%d", &m2[l][c]);
           }
           else
           {
               printf("insira o lucro do motor %d\n", c+1);
               scanf("%d", &m2[l][c]);
           }
        }
        
    }
    for (l = 0; l < 2; l++)//for da m1
    {
        for (c = 0; c < 12; c++)
        {
            switch (l)
            {
            case 0:
                motor = '1';
                printf("informe o numero de motores do tipo %c vendidos no %do mes do ano: \n", motor, c+1);
                scanf("%d", &m1[l][c]);
                break;
            case 1:
                motor = '2';
                printf("informe o numero de motores do tipo %c vendidos no %do mes do ano: \n", motor, c+1);
                scanf("%d", &m1[l][c]);
                break;
            }   
        }
    }
    FILE *file = fopen("Controle.txt", "w");
    
    
    struct meses custom1;
    custom1.Janeiro = m1[0][0]*m2[0][0];
    custom1.Fevereiro = m1[1][0]*m2[0][0];
    custom1.Marco = m1[2][0]*m2[0][0];
    custom1.Abril = m1[3][0]*m2[0][0];
    custom1.Maio = m1[4][0]*m2[0][0];
    custom1.Junho = m1[5][0]*m2[0][0];
    custom1.Julho = m1[6][0]*m2[0][0];
    custom1.Agosto = m1[7][0]*m2[0][0];
    custom1.Setembro = m1[8][0]*m2[0][0];
    custom1.Outubro = m1[9][0]*m2[0][0];
    custom1.Novembro = m1[10][0]*m2[0][0];
    custom1.Dezembro = m1[11][0]*m2[0][0];
    fprintf(file, "CUSTOS DO MOTOR 1: \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n",custom1.Janeiro ,custom1.Fevereiro ,custom1.Marco ,custom1.Abril ,custom1.Maio ,custom1.Junho ,custom1.Julho ,custom1.Agosto ,custom1.Setembro ,custom1.Outubro ,custom1.Novembro ,custom1.Dezembro);
    
    struct meses custom2;
    custom2.Janeiro = m1[0][0]*m2[1][0];
    custom2.Fevereiro = m1[1][0]*m2[1][0];
    custom2.Marco = m1[2][0]*m2[1][0];
    custom2.Abril = m1[3][0]*m2[1][0];
    custom2.Maio = m1[4][0]*m2[1][0];
    custom2.Junho = m1[5][0]*m2[1][0];
    custom2.Julho = m1[6][0]*m2[1][0];
    custom2.Agosto = m1[7][0]*m2[1][0];
    custom2.Setembro = m1[8][0]*m2[1][0];
    custom2.Outubro = m1[9][0]*m2[1][0];
    custom2.Novembro = m1[10][0]*m2[1][0];
    custom2.Dezembro = m1[11][0]*m2[1][0];
    fprintf(file, "CUSTOS DO MOTOR 2: \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n",custom2.Janeiro ,custom2.Fevereiro ,custom2.Marco ,custom2.Abril ,custom2.Maio ,custom2.Junho ,custom2.Julho ,custom2.Agosto ,custom2.Setembro ,custom2.Outubro ,custom2.Novembro ,custom2.Dezembro);
    
    struct meses lucrom1;
    lucrom1.Janeiro = m1[0][0]*m2[0][1];
    lucrom1.Fevereiro = m1[1][0]*m2[0][1];
    lucrom1.Marco = m1[2][0]*m2[0][1];
    lucrom1.Abril = m1[3][0]*m2[0][1];
    lucrom1.Maio = m1[4][0]*m2[0][1];
    lucrom1.Junho = m1[5][0]*m2[0][1];
    lucrom1.Julho = m1[6][0]*m2[0][1];
    lucrom1.Agosto = m1[7][0]*m2[0][1];
    lucrom1.Setembro = m1[8][0]*m2[0][1];
    lucrom1.Outubro = m1[9][0]*m2[0][1];
    lucrom1.Novembro = m1[10][0]*m2[0][1];
    lucrom1.Dezembro = m1[11][0]*m2[0][1];
    fprintf(file, "LUCROS DO MOTOR 1: \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n",lucrom1.Janeiro ,lucrom1.Fevereiro ,lucrom1.Marco ,lucrom1.Abril ,lucrom1.Maio ,lucrom1.Junho ,lucrom1.Julho ,lucrom1.Agosto ,lucrom1.Setembro ,lucrom1.Outubro ,lucrom1.Novembro ,lucrom1.Dezembro);

    struct meses lucrom2;
    lucrom2.Janeiro = m1[0][0]*m2[1][1];
    lucrom2.Fevereiro = m1[1][0]*m2[1][1];
    lucrom2.Marco = m1[2][0]*m2[1][1];
    lucrom2.Abril = m1[3][0]*m2[1][1];
    lucrom2.Maio = m1[4][0]*m2[1][1];
    lucrom2.Junho = m1[5][0]*m2[1][1];
    lucrom2.Julho = m1[6][0]*m2[1][1];
    lucrom2.Agosto = m1[7][0]*m2[1][1];
    lucrom2.Setembro = m1[8][0]*m2[1][1];
    lucrom2.Outubro = m1[9][0]*m2[1][1];
    lucrom2.Novembro = m1[10][0]*m2[1][1];
    lucrom2.Dezembro = m1[11][0]*m2[1][1];
    fprintf(file, "LUCROS DO MOTOR 2: \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n",lucrom2.Janeiro ,lucrom2.Fevereiro ,lucrom2.Marco ,lucrom2.Abril ,lucrom2.Maio ,lucrom2.Junho ,lucrom2.Julho ,lucrom2.Agosto ,lucrom2.Setembro ,lucrom2.Outubro ,lucrom2.Novembro ,lucrom2.Dezembro);
    
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 12; i++)
        {
            lucrototal += m1[i][0]*m2[k][1];
        }
    }
    printf("\n%d\n", lucrototal);
    fclose(file);
    return 0;
}