#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter N = ");
    scanf("%d", &n);
    for(i = 1; i<n; i=i+2){
        sum = sum + i;

    }
    printf("Sum of Odd Number : %d", sum);
}
