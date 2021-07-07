#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void entrada(int i){
    int ver=0;
for(int j=1;j<i;j++)
{
    if(i%j==0)
    {
        ver=ver+1;
    }
}
if (ver <2)
{
    printf("\n%d", i);
}

}
int main(void){
for(int i=1;i<=1000;i++)
{
entrada(i);
}
}