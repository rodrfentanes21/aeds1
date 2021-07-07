#include <stdio.h>
#include <math.h>
double f(double sal, double porc){
    double novosal;
    novosal = sal + porc*sal;
    return novosal;
}
int main(void){
    double sal;
    char opt;
    double porc=0;
    printf("insira o salario atual \n");
    scanf("%lf", &sal);
    printf("insira uma opcao de acordo com o menu abaixo \n");
    printf("A- aumento de 8 porcento \nB- aumento de 11 porcento \nC- aumento de 20 porcento \nD- Sair do programa \n");
    scanf(" %c", &opt);
    while (opt != 'D')
    {
        switch(opt)
        {
            case 'A':
            porc = 0.08;
            printf("o salario pos aumento e: %lf \n", f(sal, porc));

            break;
            case 'B':
            porc = 0.11;
            printf("o salario pos aumento e: %lf \n", f(sal, porc));

            break;
            case 'C':
            porc=0.2;
            printf("o salario pos aumento e: %lf \n", f(sal, porc));

            break;
            default:
            printf("opcao invalida \n");
        }
        printf("insira o salario atual \n");
        scanf("%lf", &sal);
        printf(" A- aumento de 8 porcento \nB- aumento de 11 porcento \nC- aumento de 20 porcento \nD- Sair do programa \n");
        scanf(" %c", &opt);
    }
    
    return 0;
}