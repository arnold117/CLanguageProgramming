//3x2 & 2x4 -> 3x4
//c[0][0] = a[1][] x b[][1]

#include<stdio.h>

#define M 3
#define N 4
#define K 2

int main(void)
{
    int a[M][K] = { {1, 2}, {3, 4}, {5, 6} }, b[K][N] = { {1, 2, 3, 4}, {5, 6, 7, 8}}, c[M][N] = {0}, i, j ,k;

    for ( i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            for ( k = 0; k < K; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            
        }
        
    }
    
   for ( i = 0; i < M; i++)
   {
       for (j = 0; j < N; j++)
       {
           printf("%10d", c[i][j]);
       }
       
       printf("\n");
   }

    return 0;
}
