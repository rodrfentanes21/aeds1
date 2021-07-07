#include <stdio.h>
#include <math.h>
void f(int x){
int i=0;
int fat=1;
for (i=x;i>=1;i--)
{
    fat = fat * i;
}
printf("o valor da fatorial e %d", fat);
}

int main(void){
    int x;
    printf("digite o valor do numero");
    scanf("%d", &x);
    f(x);
    return 0;
}