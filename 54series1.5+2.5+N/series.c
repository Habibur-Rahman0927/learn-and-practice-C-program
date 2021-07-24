//1.5+2.5+........+n
#include<stdio.h>
int main()
{
    float i, sum = 0, n;
    printf("Enter N = ");
    scanf("%f", &n);

    for(i = 1.5; i<=n; i++){
        sum = sum+i;
    }
    printf("Sum of number %f", sum);
}
