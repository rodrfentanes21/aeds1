#include <stdio.h>
#include <stdlib.h>

int main(void){
    int carros, preco;
    float resultado1=0, resultado2=0, resultado3=0;
    printf("\nInsira a quantidade carros");
    scanf("%i", &carros);
    printf("\nInsira o preco do aluguel");
    scanf("%i", &preco);
    resultado1 = ((carros/3) * preco) * 12;
    resultado2 = (carros/10)+(preco+(preco*0,20));
    resultado3 = (carros * 0,02) * 600;
    FILE *file = fopen("resultado.txt", "w");
    fprintf(file, "\n1- %f", resultado1);
    fprintf(file, "\n2- %f", resultado2);
    fprintf(file, "\n3- %f", resultado3);

    fclose(file);
    return 0;
}