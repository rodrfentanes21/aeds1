#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int f(int x,int y, int result){

if (y>0)
{
    result += x;
    f(x,y-1, result);
}
else
{
    return result;
}
}
int main(void){
    int x=0, y=0;
    printf("insira dois valores \n");
    scanf("%d %d", &x, &y);
    if (x>0 && y>0)
    {
        printf("%d", f(x,y,0));
    }
    else
    {
        printf("numero(s) invalido(s)");
    }
    return 0;
}