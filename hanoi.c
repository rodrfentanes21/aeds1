#include <stdio.h>
#include <math.h>
#include <stdlib.h>
    
    void hanoi(int n, char a, char b, char c)
    {
      if (n == 1)
        printf("mover disco %d de %c para %c\n", n, a, b);
     else
     {
       hanoi(n - 1, a, c, b);
       printf("mover disco %d de %c para %c\n", n, a, b);
       hanoi(n - 1, c, b, a);  
     }
   }
   
   int main(void)
  {
    int ndiscos;
    printf("insira o numero de discos contidos na torre de hanoi. \n");
    scanf("%d", &ndiscos);
    hanoi(ndiscos, 'A', 'B', 'C');
    return 0;
  }