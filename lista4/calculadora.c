#include <stdio.h>
#include <math.h>
double somar(double x,double y){
    double result;
    result = x + y;
    return result;
}
double subtrair(double x, double y){
    double result;
    result = x - y;
    return result;
}
double multiplicar(double x, double y){
    double result;
    result = x * y;
    return result;
}
double dividir(double x, double y){
    double result;
    if(y==0)
    {
        printf("operacao inviavel");
    }
    else
    {
        result = x / y;
        printf("%lf %lf", x , y);
        return result;
    }
}
int main(void){
    double x, y;
    int opt=0;
    printf(" [1] - Para somar \n [2] - Para subtrair \n [3] - Para multiplicar \n [4] - Para dividir \n [5] - Para Sair \n");
    scanf("%d", &opt);
    while(opt != 5)
    {
    switch (opt)
    {
    case 1:
        printf("insira dois numeros \n");
        scanf("%lf %lf", &x, &y);
        
        printf("o resultado da operacao e: %.2lf \n", somar(x,y));
        break;
    case 2:
        printf("insira dois numeros \n");
        scanf("%lf %lf", &x, &y);
        
        printf("o resultado da operacao e: %.2lf \n", subtrair(x,y));
    break;
    case 3:
        printf("insira dois numeros \n");
        scanf("%lf %lf", &x, &y);
        
        printf("o resultado da operacao e: %.2lf \n", multiplicar(x,y));
    break;
    case 4:
        printf("insira dois numeros \n");
        scanf("%lf", &x);
        scanf("%lf", &y);
        
        printf("o resultado da operacao e: %.2lf \n", dividir(x,y));
    break;
    
    default:
        printf("opcao invalida \n");
        break;
    }
    scanf("%d", &opt);
    }
    return 0;
}
