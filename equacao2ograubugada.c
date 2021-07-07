#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int raizes(double a, double b, double c, double *, double *);
int main(void){
    double a, b, c;
    printf("insiras os valores de a, b, e c, respectivamente \n");
    scanf("%lf", &a);
    double x1=0;
    double x2=0;
    printf("o numero de raizes da funcao e: %d", raizes(a, b, c, &x1, &x2));
    printf("as raizes sao %lf e %lf", x1, x2);
    return 0;
}
int raizes(double a, double b, double c, double *x1, double *x2)
{
    double delta = pow(b,2) - 4*a*c;
    *x2 = (-b - sqrt(delta))/(2*a);
    *x1 = (-b + sqrt(delta))/(2*a);
    if (delta > 0){
    return 2;
    }
    else if (delta ==0){
    *x1 = -b + sqrt(delta)/2*a;
    *x1= *x2;
      return 1;
    }
    else if(delta <0){
      printf("nao existem raizes para essa equacao");
      return 0;
    }
}