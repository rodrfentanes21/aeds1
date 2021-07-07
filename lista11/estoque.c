#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int matrizM [5][3];
int l=0, c=0;
int pergunta, num=0, soma1=0, soma2=0, soma3=0, soma4=0;
for(c = 0; c < 3; c++)
{
  for(l = 0 ; l < 5; l++)
  {
    if(l != 4){
    printf("Insira o numero de estoque do produto %d no armazem %d: \n", c+1, l+1);
    scanf("%d", &matrizM [l][c]);
    printf("o item e quadrado? digite 1 para sim e outro numero para nao");
    scanf("%d", &pergunta);
    if(pergunta == 1 && l==0)
    {
        num = matrizM[l][c];
        soma1 += num;
    }
    if(pergunta == 1 && l==1)
    {
        num = matrizM[l][c];
        soma2 += num;
    }
    if(pergunta == 1 && l==2)
    {
        num = matrizM[l][c];
        soma2 += num;
    }
    if(pergunta == 1 && l==3)
    {
        num = matrizM[l][c];
        soma2 += num;
    }
    }
    else
    {
      printf("Insira o valor do produto: \n");
    scanf("%d", &matrizM [l][c]);
    }
  }
}
printf("numero de items quadrados no armazem 1: %d\n", soma1);
printf("numero de items quadrados no armazem 2: %d\n", soma2);
printf("numero de items quadrados no armazem 3: %d\n", soma3);
printf("numero de items quadrados no armazem 4: %d\n", soma4);
    //Achando maior valor
int localM = matrizM [0][1];
int posicao = 0;// armazem onde esta localizado maior numero

int custo1 = 0;
int custo2 = 0;
int custo3 = 0;

int localm = matrizM[0][0];
int posicaom = 0;
  for(c = 0; c < 3; c++)
{
  for(l = 0 ; l < 4; l++)
  {
  // maior estoque da coluna 1
      if(c == 0)
      {
        custo1 += matrizM[l][c];
      }
      if(c == 1)
      {
        if(localM < matrizM[l][c])
        {
          localM = matrizM[l][c];
          posicao = l + 1;
       
        }
         custo2 += matrizM[l][c];
      }
      if(c == 2)
      {
        custo3 += matrizM[l][c];
      }

      //menor estoque
         if(localm < matrizM[l][c])
        {
          localm = matrizM[l][c];
          posicaom = l + 1;
        }
      
  }
}
printf("o maior estoque do produto 2 e no armazem %d e o menor e no armazem %d\n", posicao, posicaom);
int v[3];
int t = 0;
//calculo custo total produto
for(c = 0;c < 3; c++)
{
  l = 5;
  v[t] = matrizM[l][c];
  t++;
}
int ct1;
int ct2;
int ct3;
int a = v[0];
int b = v[1];
int p = v[3];
ct1 = a*custo1;
ct2 = b*custo2;
ct3 = p*custo3;
printf("custos totais: %d %d e %d", ct1, ct2, ct3);
t = 0;
int guarda = 0;
for(l = 0 ; l < 4; l++)
{
  for(c = 0; c < 3; c++)
  {
    guarda += v[t]*matrizM [l][c];
    t++;
  }
  printf("O valor do armazem %d e: %d", l+1 ,guarda);
  guarda = 0;
  t = 0;
  
}
    return 0;
}