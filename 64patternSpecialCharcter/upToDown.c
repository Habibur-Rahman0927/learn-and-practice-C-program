#include<stdio.h>
int main()
{
    int n, col, row;
    printf("Enter N : ");
    scanf("%d", &n);
    for(row = n; row>=1; row--)
    {
        for(col =1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col = 1; col<=row; col++)
        {
            printf("%d", row%2);
        }
        printf("\n");

    }
}
