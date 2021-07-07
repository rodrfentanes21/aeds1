#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void f(int n, int ntotal, int i){
    if (i > n)
    {
        printf("%d", ntotal);
    }
    else
    {
    ntotal = ntotal + i;
    i++;
    f(n, ntotal, i);
    }
}
int main(void){
    int n;
    printf("insira o valor de n\n");
    scanf("%d", &n);
    if(n<0)
    {
        printf("numero invalido");
        return 0;
    }
    else
    {
        f(n, 0, 0);
    }
    return 0;
}