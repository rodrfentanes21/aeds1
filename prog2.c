#include <stdio.h>
#include <math.h>
int main(void)
{
char sexo, zoio, cabelo;
double idade, itotal=0, midade, altura, htotal=0, mih, peso, ptotal=0, mipeso, t=0, pm, pf;
int opt, masc=0, fem=0, cvl=0;
printf("insira qualquer numero para iniciar o programa. \n para sair digite 0 \n");
scanf("%d", &opt);
while (opt != 0)
{
    t=t+1;
    printf("insira o sexo. \n");
    scanf(" %c", &sexo);
    switch(sexo)
    {
    case 'M':
    masc= masc+1;
    break;
    case 'F':
    fem=fem+1;
    break;
    default:
    printf("opcao invalida \n");
    }
    printf("insira a cor dos olhos \n A - para azul \n V - para verde \n C - para castanho \n");
    scanf(" %c", &zoio);
    printf("insira a cor do cabelo \n L - para louro \n C - para castanho \n P - Preto \n");
    scanf(" %c", &cabelo);
    if((zoio == 'V') && (cabelo == 'L'))
    {
        cvl=cvl+1;
    }
    printf("insira a idade \n");
    scanf("%lf", &idade);
    itotal = itotal + idade;
    printf("insira a altura em cm \n");
    scanf("%lf", &altura);
    htotal = htotal + altura;
    printf("insira o peso em kg \n");
    scanf("%lf", &peso);
    ptotal = ptotal + peso;

    printf("insira qualquer numero para iniciar o programa. \n para sair digite 0 \n");
    scanf("%d", &opt);
}
printf("programa finalizado");
midade = itotal / t;
mih = htotal / t;
mipeso = ptotal / t;
printf("a media de idade dos habitantes e: %lf \n", midade);
printf("a media de altura dos habitantes e: %lf \n", mih);
printf("a media de peso dos habitantes e: %lf \n", mipeso);
pm = 100 * (double)masc / t;
pf = 100 * (double)fem / t;
printf("a porcentagem de pessoas do sexo masculino e: %lf \n", pm);
printf("a porcentagem de pessoas do sexo feminino e: %lf \n", pf);
printf("o numero de pessoas que possuem olhos verdes e cabelo louro e: %d \n", cvl);
return 0;
}