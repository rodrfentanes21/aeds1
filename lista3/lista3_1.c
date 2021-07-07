#include <stdio.h>
#include <math.h>
int main (void)
{
int i=0, soma=0, num, qtde=0, media;
for(i=1; i<=6; i++)
{
    printf("digite um numero");
    scanf("%d", &num);
    soma = soma + num;
    if(num == 10)
    {
        qtde = qtde+1;
    }
}
media = soma/6;
printf("resultado = %d \n", media);
printf("quantidade = %d \n", qtde);
}