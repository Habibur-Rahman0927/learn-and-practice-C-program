
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d", &n);
    for(row = n; row >=1; row--){

        for(col = 1; col<=row; col++){
            printf("%d", row);//col, row, %2 = 0, capital alp = +64 , small = +96;
        }
        printf("\n");
    }
}
