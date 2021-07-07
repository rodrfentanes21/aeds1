#include <stdio.h>
#include <math.h>
int f(int n1, int n2){
    int i=0;
    int mdc=0;
    if(n1 >= n2)
    {
        for(i=1;i<=n2;i++)
        {
        if ((n1 % i == 0) && (n2 % i ==0))
        {
            mdc = i;
        }
        }
    }
    else if (n2 > n1)
    {
        for(i=1;i<=n1;i++)
        {
        if ((n1 % i == 0) && (n2 % i ==0))
        {
            mdc = i;
        }
        }
    }
    return mdc;
}

int main(void){
    int n1, n2;
    printf("insira os dois numeros \n");
    scanf("%d %d", &n1, &n2);
    f(n1, n2);
    printf(" mdc: %d", f(n1, n2));
    return 0;
}