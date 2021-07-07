#include <stdio.h>
#include <math.h>
double exist(double n1,double n2,double n3){
    if (n1>n2+n3)
    {
        printf("triangulo nao existe \n");
    }
    else if (n2>n1+n3)
    {
        printf("triangulo nao existe \n");
    }
    else if (n3>n2+n1)
    {
        printf("triangulo nao existe \n");
    }
    else
    {
        return 1;
    }
}

void tipo(double n1, double n2, double n3){
    if(n1==n2 && n2==n3 )
    {
        printf("\n triangulo equilatero");
    }
    else if((n1==n2 && n2!=n3)||(n2==n3 && n1 != n2)||(n1==n3 && n2!=n1))
    {
        printf("\n triangulo isoceles");
    }
    else if (n1 != n2 && n1 != n3 && n2 != n3)
    {
        printf("\n triangulo escaleno");
    }
}

int main(void){
    double n1, n2, n3;
    printf("digite 3 numeros maiores que 0 \n");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    while (n1<=0 || n2<=0 || n3<=0)
    {
        printf("tente novamente \n");
        printf("digite 3 numeros maiores que 0 \n");
        scanf("%lf %lf %lf", &n1, &n2, &n3);
    }
    
exist(n1,n2,n3);
int teste = exist(n1,n2,n3);
    if(teste == 1)
    {
        tipo(n1,n2,n3);
    }
    return 0;
}