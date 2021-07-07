#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int soma(int num, int total){
    for (int i = 1; i < num; i++)
    {
        if ((num % i) == 0)
        {
            printf("teste");
            printf("\n%d", i);
            total =  total+i;
        }
        
    }
    return total;
}
int main(void){
    int num;
    printf("insira um numero");
    scanf("%d", &num);
    int adicao = soma(num, 0);
    FILE *file = fopen("somadivisores.txt", "w");
    if (file == NULL)
    {
        printf("erro na abertura");
        return -1;
    }
    fprintf(file, "\n%d\n",adicao);
    printf("o numero que deve aparecer no txt e %d", adicao);
    fclose(file);
    return 0;
}