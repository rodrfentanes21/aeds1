#include <stdio.h>
#include <math.h>
f(int n1, int n2){
    double x=0;
    x = (double)n1 / (double)n2;
    double y;
    y = x - (int)x;
    if (y==0)
    {
        printf("e divisivel");
    }
    else
    {
        printf("nao e divisivel");
    }
}

int main(void){
    int n1=0, n2=0;
    printf("insira dois numeros \n");
    scanf("%d %d", &n1, &n2);
    f(n1, n2);

    return 0;
}