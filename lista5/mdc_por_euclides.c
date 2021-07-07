#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int euc(int n1, int n2, int i){
    if (n1 ==0)
    {
        return n2;
    }
    else if (n2 == 0 )
    {
        return n1;
    }
    else if (n1>n2)
    {
        n1=n1-n2;
        i++;
        printf("\n numero de vezes q a funcao rodou: %d", i);
        euc(n1, n2, i);
    }
    else if (n2>n1)
    {
        n2=n2-n1;
        i++;
        printf("\n numero de vezes q a funcao rodou: %d", i);
        euc (n1, n2, i);
    }
    
}
int main(void){
    int n1, n2;
    printf("insira dois numeros \n");
    scanf("%d %d", &n1, &n2);
    printf("\no mdc desses numeros e: %d", euc (n1,n2, 0));
    return 0;
}