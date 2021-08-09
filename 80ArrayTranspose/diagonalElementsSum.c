#include<stdio.h>
int main()
{

    int A[3][3], i,j, sum = 0, upperSum = 0, lowerSum = 0;
    printf("enter the element for the matrix\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("A[%d][%d}] = ", i,j);
            scanf("%d", &A[i][j]);

        }
    }
    printf("\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {

            printf("%d ", A[i][j]);

        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i==j)
            {
                printf("\n%d ", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nsum of diagonal elements = %d\n ", sum);

    // upper

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }
            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }
    printf("\n Sum of upper triangle elements = %d \n", upperSum);
    printf("\n Sum of lower triangle elements = %d \n", lowerSum);
}
