#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct Pessoa
{
    char sexo;
    double altura;
    int idade;
    char olhos;
}PessoaNova;

int main(void){
    PessoaNova pes[50];
    int maioridade=0, estranho=0, itotal, qthomem=0, cont=0;
    double medidade, phomem;
    char sw;
    for (int i = 0; i < 50; i++)
    {
        printf("digite o sexo, M ou F\n");
        scanf(" %c", &pes[i].sexo);
        sw = pes[i].sexo;
        printf("digite a altura em metros\n");
        scanf("%lf", &pes[i].altura);
        printf("digite a idade\n");
        scanf("%d", &pes[i].idade);
        printf("Opcoes: A -Azuis, V -Verdes ou C - Castanhos\n");
        printf("digite a letra equivalente a cor dos olhos\n");
        scanf(" %c", &pes[i].olhos);
        if (pes[i].idade > maioridade)
        {
            maioridade = pes[i].idade;
        }
        if (pes[i].altura>1.6 && pes[i].olhos =='C')
        {
            itotal += pes[i].idade;
            cont++;
        }
        switch (sw)
        {
        case 'M':
            qthomem++;
            break;
        case 'F':
            if (pes[i].idade >= 20 || pes[i].idade <= 45 || (pes[i].olhos == 'V' && pes[i].altura < 1.7))
            {
                estranho++;
            }
            break;
        default:
            printf("letra invalida para sexo\n");
            break;
        }
    }
    medidade = (double)itotal/(double)cont;
    printf("a media de iade das pessoas com olhos castanhos e altura maior que 1.60 e: %lf\n", medidade);
    printf("a maior idade entre os habitantes e: %d\n", maioridade);
    phomem = (double)qthomem/50 * 100;
    printf("o percentual de homems e: %lf\n", phomem);
    printf("a quantidade de individuos do sexo feminino cuja idade esteja entre 20 e 45 ou tenham olhos verdes e altura inferior a 1,70m e: %d\n", estranho);
    return 0;
}