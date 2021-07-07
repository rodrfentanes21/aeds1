#include <stdio.h>
#include <math.h>
int main(void)
{
int n=0, i=0, menor1=0, menor2=0, menortotal=0, pesudo1=0, pesudo2=0;
double idade, altura, peso, midadetime1=0, midadetime2=0, itotaltime1=0, htotaltime1, htotalcamp, mhtotalcamp, itotaltime2=0, htotaltime2, ppesudo;
printf("insira a idade do jogador \n");
printf("insira o peso do jogador \n");
printf("insira a altura do jogador \n");
for(n=1; n<=5; n++)
{
    scanf("%lf %lf %lf", &idade, &peso, &altura);
itotaltime1 = itotaltime1 +idade;
htotaltime1 = htotaltime1 +altura;
if(idade < 18)
{
    menor1++;
}
if(peso>80)
{
    pesudo1++;
}
}
midadetime1 = itotaltime1/5;
printf("a media de idade desse time e: %lf \n", midadetime1);
for(i=1; i<=5; i++)
{
    scanf("%lf %lf %lf", &idade, &peso, &altura);
itotaltime2 = itotaltime2 +idade;
htotaltime2 = htotaltime2 +altura;
if(idade < 18)
{
    menor2++;
}
if(peso>80)
{
    pesudo2++;
}
}
midadetime2 = itotaltime2/5;
printf("a media de idade desse time e: %lf \n", midadetime2);
menortotal = menor1 +menor2;
ppesudo = 100*((double)pesudo1 + (double)pesudo2)/10;
mhtotalcamp = (htotaltime1 + htotaltime2)/10;
printf("a quantidade de jogadores com idade inferior a 18 e: %d \n", menortotal);
printf("a media das alturas de todos jogadores do campeonato  e: %lf \n", mhtotalcamp);
printf("a porcentagem de jogadores com mais de 80kg entre todos e: %lf \n", ppesudo);
return 0;
}