#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
    srand (time(0));

    int matrix[6][6];
    int conf=0;
    for (int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 6; c++)
        {
            matrix[l][c] = rand() % 2;
            printf("%d ", matrix [l][c]);
        }
        printf("\n");
    }
    for (int l = 1; l < 5; l++)
    {
        for (int c = 1; c < 5; c++)
        {
            if (matrix[l][c] == 1)
            {
                for (int i = l-1; i < l+2; i++)
                {
                    for (int j = c-1; j < c+2; j++)
                    {
                        if (matrix[i][j]  == 1 && (i == 0 || i == 5 || j == 0 || j == 5 ))
                        {
                            conf++; 
                        }
                    }
                }
                if (conf == 0)
                {
                    matrix[l][c] = 0;
                    printf("ilha de 1 fora da borda removida \n");
                }
                
            }
        }
    }
    
    return 0;
}