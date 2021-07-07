#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int f(int x, int y,  int i){
    if (x>y)
    {
        x = x - y;
        i++;
        f(x,y,i);
    }
    else
    {
        return i;
    }
}
int main(void){
    int x, y;
    printf("insira dois numeros \n");
    scanf("%d %d", &x, &y);
    if (x>0 && y>0)
    {
        printf("%d", f(x,y,1));
    }
    else
    {
        printf("numero invalido");
    }
    return 0;
}