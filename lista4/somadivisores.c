#include <stdio.h>
#include <math.h>
int func(num1){
    int soma=0;
    int divisor=0;
        for(divisor = 1;divisor < num1; divisor++)
        {
            if(num1 % divisor == 0)
            {
                soma = soma + divisor;
            }
        }

    return soma;
}
int main(void){
    int num1=0;
    printf("insira um numero inteiro positivo \n");
    scanf("%d", &num1);
    if(num1 > 0)
    {
    func(num1);
    printf("a soma dos divisores desse numero e: %d", func(num1));
    }
    else
    {
        printf("numero invalido");
    }
    return 0;
}