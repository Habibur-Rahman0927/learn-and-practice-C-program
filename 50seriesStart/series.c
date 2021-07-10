//i+2+3+4............
#include<stdio.h>
int main()
{
    int n, sum = 0,i;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);
    printf("1+2+3+4............%d\n", n);
    for(i=1; i<=n; i++){

        sum = sum+ i;

        printf("Looping series %d + %d\n", i, sum);
    }
    printf("Series is %d", sum);

}
