#include <stdio.h>
#include <math.h>
int main(void)
{
int i=0, q, a=0;
int n, j=0;
printf("insira os numeros");
for(i=1;i<=10;i++)
{
    j=0;
    scanf("%d", &n);
    for (q = 1; q <= n; q=q+1)
    {
        if (n%q==0)
        {
            j=j+1;
        }
        
    }
    if (j<=2)
    {
        a++;
    }
}
printf("a quantidade de numeros primos inseridos e: %d", a);
return 0;
}
