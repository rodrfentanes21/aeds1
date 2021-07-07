#include <stdio.h>
#include <math.h>
/*
ps: o nome do cara do lata velha e luciano huck
*/
int main(void)
{
int opt=0, idade=0, sexo=0;
int itvoice=0, t=0;
int ffem=0, lfem=0, tfem=0;
int fjovem=0, ftot=0;
double it=0.00, fmed=0.00;
printf("menu de opcoes:\n 1- Domingao do faustao \n 2- Luciano Huck \n 3- The Voice Brasil \n 4- Sair. \n");
scanf("%d", &opt);
    if((opt > 4) || (opt < 1))
    {
        printf("opcao invalida!\n");
    }
while(opt!=4)
{
 printf("insira a idade \n");
 scanf("%d", &idade);
if((idade > 150) && (idade < 0))
{
    printf("opcao invalida!\n");
}
printf("insira o numero equivalente ao sexo:\n 1- Feminino \n 2- Masculino");
scanf("%d", &sexo);
if((sexo<0) || (sexo>2))
{
        printf("opcao invalida!\n");
}
    switch(opt)
    {
        case 1:
        if(sexo == 1)
        {
            ffem++;
        }
        if((idade>=18) && (idade<=28))
        {
            fjovem++;
        }
        ftot++;
        break;
        case 2:
        if(sexo == 1)
        {
            lfem++;
        }
        break;
        case 3:
        if(sexo == 1)
        {
            tfem++;
        }
        if(sexo == 2)
        {
            itvoice = itvoice +idade;
            t++;
        }
        break;
        case 4:
        opt=0;
        break;
        default:
        printf("opcao invalida!\n");
    }//fim do switch do opt
    printf("menu de opcoes:\n 1- Domingao do faustao \n 2- Luciano Huck \n 3- The Voice Brasil \n 4- Sair. \n");
    scanf("%d", &opt);
    if ((opt > 4) || (opt < 1))
    {
       printf("opcao invalida!\n");
    }
}//fim do whilezao do opt
    if((ffem > lfem) && (ffem > tfem))
    {
        printf("faustao teve maior numero de votos femininos \n");
    }
    else if((lfem > ffem) && (lfem > tfem))
    {
        printf("luciano huck teve maior numero de votos femininos \n");
    }
    else if ((tfem > ffem) && (tfem > lfem))
    {
        printf("the voice brasil teve maior numero de votos femininos  \n");
    }
    else
    {
        printf("nao foram computados votos femininos suficientes ou deu empate \n");
    }
    it = (double)itvoice / (double)t;
    fmed = (double)fjovem / (double)ftot;
    printf("a media da idade dos telespectadores do programa the voice brasil para o sexo masculino e: %lf \n",it);
    printf("A porcentagem de telespectadores do Domingao do Faustao com idade entre 18 e 28 anos com relacao ao total de telespectadores do Domingao do Faustao: %lf \n",fmed);
    return 0 ;
}