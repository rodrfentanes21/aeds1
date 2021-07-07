#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double func(int n, double c, int den, int i, int contador, double fat){
    if (contador == n)
    {
        return c;
    }
    if (den==1)
    {
        c = c + 1/den;
        func(n, c , 2, 0, contador++, 2);
        printf("\npenis");
    }
    else
    {
        for (i = den; i >=1 ; i--)
        {
            fat = fat*i;
        }
        if (contador % 2==0)
        {
            c = c - 1/fat;
        }
        else
        {
            c = c + 1/fat;
        }
        den+=2;
        func(n, c, den, 0, contador++, den);
        printf("pika");
    }
}
int main(void){
    int n;
    printf("insira o numero de termos \n");
    scanf("%d", &n);
    double result = func(n , 0, 1, 0, 1, 2);
    printf("%lf", result);
    return 0;
}