#include <stdio.h>
#include <math.h>
int f(int n1, int n2){
    int i=0;
    int div=0;
    if (n1%n2==0)
    {
        return 0;
    }
    else
    {
        if(n1>n2)
        {
        for(i=n1;i>=n2;i--)
        {
            if(n1%i==0)
            {
                div=i;
            }
        }
        }
            else if(n2>n1)
        {
        for(i=n2;i>=n1;i--)
        {
            if(n2%i==0)
            {
                div=i;
            }
        }
        }
        
    return div;
}
}

int main(void){
    int n1, n2;
    printf("insira dois numeros \n");
    scanf("%d %d", &n1, &n2);
    f(n1,n2);
    printf("%d", f(n1,n2));
    return 0;
}