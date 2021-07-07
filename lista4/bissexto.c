#include <stdio.h>
#include <math.h>
 void verificador(int ano){
     if(ano % 4 == 0)
     {
         if(ano % 100 == 0)
         {
             if(ano % 400 == 0)
             {
                 printf("ano bissexto");
             }
             else
             {
                 printf("ano nao bissexto");
             }
            
         }
        else
        {
            printf("ano bissexto");
        }
     }
     else
     {
         printf("ano nao bissexto");
     }
 }
int main (void){
int ano=0;
printf("digite o ano em que voce nasceu \n");
scanf("%d", &ano);
verificador(ano);
    return 0;
}