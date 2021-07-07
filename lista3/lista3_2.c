#include <stdio.h>
#include <math.h>
int main (void)
{
int a=0, m, qtde;
qtde = a;
for(a=0; a<=5; a++)
{
    m = qtde + 10;
    if(a<3)
    {
        a++;
    }
    else
    {
        m=m-5;
    }
}
printf("% d \n %d \n %d \n ", m, a, qtde);
}