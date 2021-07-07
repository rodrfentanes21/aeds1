#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fibo(int n){
if (n==0)
{
    return 0;
}
else if (n==1)
{
    return 1;
}
else if (n>1)
{
    int a = fibo(n-1) + fibo(n-2);
    printf("\n recursivo?");
    return a;
}
}
int main(void){
    int n;
    printf("insira o termo da sequencia fibonnaci: \n");
    scanf("%d", &n);
    printf("\no termo solicitado e: %d", fibo(n));
    return 0;
}