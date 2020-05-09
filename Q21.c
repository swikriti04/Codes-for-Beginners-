#include <stdio.h>
#define SIZE 5 
int main()
{
    int A[SIZE][SIZE];  
    int B[SIZE][SIZE]; 
    int C[SIZE][SIZE]; 
    
    int row, col, i, sum;
    printf("Enter elements in matrix A of size %d x %d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\n Enter elements in matrix B of size %d x %d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            sum = 0;
            for(i=0; i<SIZE; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }
    printf("\n Product of matrix A * B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
    return 0;
}
