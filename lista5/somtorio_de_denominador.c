#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void f(double n, double ntotal, int i){
    if (i > n)
    {
        printf("%lf", ntotal);
    }
    else
    {
    ntotal = ntotal + 1/(double)i;
    i++;
    f(n, ntotal, i);
    }
}
int main(void){
    double n;
    printf("insira o valor de n\n");
    scanf("%lf", &n);
    f(n, 0, 1);
    return 0;
}