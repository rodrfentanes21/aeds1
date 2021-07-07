#include <stdio.h>
#include <math.h>
int main(void)
{
int canal = 0, idade = 0, sexo = 0;
int faustaofem = 0, lucianofem = 0, thevoicefem = 0;
double idadeTelep = 0.0;
int idadethevoice = 0;
int telespec = 0;
int faustaoint = 0;
int faustaotot = 0;
double medfaustao = 0.0;
printf("menu de opcoes: \n");
printf("1- para domingao faustao\n");
printf("2- para luciano huck\n");
printf("3- para the voice brasil\n");
printf("4- para sair\n");

scanf("%d", &canal);
    if(canal > 4)
    {
      printf("opcao invalida \n");
    }
while(canal != 4)
{
    printf("digite a idade do telespectador");
scanf("%d", &idade);
    if(idade > 150 && idade < 0)
{
  printf("opcao invalida \n");
}
printf("digite o sexo: \n 1 - para feminino \n 2- para masculino");
scanf("%d", &sexo);

if(sexo > 2)
{
  printf("opcao invalida \n");
}
    switch(canal)
    {
        case 1:

      if(sexo == 1)
      {
        faustaofem = faustaofem + 1;
        
      }
      if(idade >= 18 && idade <= 28)
      {
faustaoint = faustaoint + 1;
      }
    faustaotot = faustaotot + 1;
        break;
        case 2:

      if(sexo == 1)
      {
        lucianofem = lucianofem + 1;
      }
     

    
        break;
        case 3:

       if(sexo == 1)
      {
       thevoicefem =thevoicefem + 1;
      }
         if(sexo == 2)
      {
        idadethevoice = idadethevoice + idade;
       telespec = telespec + 1;
      }
    
        break;
        case 4:
        canal = 0;
        break;
        default:
        printf("opcao invalida \n");
    }
    printf("digite o canal 1,2 ou 3 e 4 para sair");
    scanf("%d", &canal);
    if(canal > 4)
    {
      printf("opcao invalida \n");
    }
 

}
if( faustaofem > thevoicefem &&  faustaofem > lucianofem)
{
  printf("faustao teve maior numero de votos femininos \n");
}
else if( thevoicefem > faustaofem && thevoicefem > lucianofem)
{
  printf("the voice brasil teve maior numero de votos femininos  \n");
}   
else if(lucianofem > faustaofem && lucianofem > thevoicefem)
{
  printf("luciano huck teve maior numero de votos femininos \n");
}
else
{
    printf("nao existem votos femininos suficientes \n");
}

idadeTelep = (double)idadethevoice/(double)telespec;
printf("a media da idade dos telespectadores do programa the voice brasil para o sexo masculino e: %0.2lf \n",idadeTelep);
medfaustao = (double)faustaoint/(double)faustaotot;
printf("A porcentagem de telespectadores do Domingao do Faustao com idade entre 18 e 28 anos com relacao ao total de telespectadores do Domingao do Faustao: %0.2lf \n",medfaustao);
return 0;
}