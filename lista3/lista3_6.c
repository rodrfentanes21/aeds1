#include <stdio.h>
#include <math.h>
int main (void)
{
int x=0, y=0, r=0;
printf("insira dois numeros \n");
scanf("%d %d", &x, &y);
while(y != 0)
{
    r = x%y;
    x=y;
    y=r;
}
printf("o valor de x: %d", x);
}
 