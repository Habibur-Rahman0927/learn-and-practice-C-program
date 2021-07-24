
#include<stdio.h>
int main()
{
    int i, j, numberOfRows, numberOfCols;
    int A[10][10], B[10][10], c[10][10];

    printf("Enter the number of rows and cols : ");
    scanf("%d %d", &numberOfRows, &numberOfCols);
    printf("Enter elements for A matrix.\n");
    for(i = 0; i < numberOfRows; i++)
    {
        printf("\n");
        for(j = 0; j < numberOfCols; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);

        }
    }
    printf("\nEnter elements for B matrix.\n");
    for(i = 0; i < numberOfRows; i++)
    {
        printf("\n");
        for(j = 0; j < numberOfCols; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);

        }
    }

    printf("A = ");
    for(i = 0; i < numberOfRows; i++)
    {
        printf("\t");
        for(j = 0; j < numberOfCols; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    printf("\nB = ");
    for(i = 0; i < numberOfRows; i++)
    {
        printf("\t");
        for(j = 0; j < numberOfCols; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            c[i][j] = A[i][j] + B[i][j];
        }

    }

    printf("\nA + B = ");
    for(i = 0; i < numberOfRows; i++)
    {

        for(j = 0; j < numberOfCols; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\t");

    }

    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            c[i][j] = A[i][j] - B[i][j];
        }

    }

    printf("\nA - B = ");
    for(i = 0; i < numberOfRows; i++)
    {

        for(j = 0; j < numberOfCols; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\t");

    }


}
