#include<stdio.h>
int main()
{
    int col, row, n;
    printf("Enter N = ");
    scanf("%d0", &n);
    for(row = 1; row<= n; row++){
        for(col=1; col<=n;col++){
            printf("%d", col);
        }
        printf("\n");
    }
}
