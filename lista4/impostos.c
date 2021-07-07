#include <stdio.h>
#include <math.h>
void f(double imp, int mes){
double valor;
if (imp < 50)
{
    valor = imp + 0.01*mes*imp;
    printf("o valor a ser pago pelo proprietario e %lf", valor);
}
else if (imp>=50 && imp <180)
{
    valor = imp + 0.02*mes*imp;
    printf("o valor a ser pago pelo proprietario e %lf", valor);
}
else if (imp >=180 && imp< 500)
{
    valor = imp + 0.04*mes*imp;
    printf("o valor a ser pago pelo proprietario e %lf", valor);
}
else if (imp >=500 && imp <=1200)
{
    valor = imp + 0.07*mes*imp;
    printf("o valor a ser pago pelo proprietario e %lf", valor);
}
else if (imp>1200)
{
    valor = imp + 0.1*mes*imp;
    printf("o valor a ser pago pelo proprietario e %lf", valor);
}
}
int main (void){
    int i=0, mes;
    double imp;
    for(i=1;i<=10;i++)
    {
        printf("\ninsira o valor do imposto para o proprietario %d \n", i);
        scanf("%lf", &imp);
        printf("agora insira o numero de meses em atraso \n");
        scanf("%d", &mes);
        f(imp, mes);
    }
    return 0;
}