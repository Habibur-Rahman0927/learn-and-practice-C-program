#include<stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter the last number : ");
    scanf("%d", &n);
    printf("1+2+3............+ %d\n", n);
    while(i<=n){
        sum = sum + i;
        printf("Looping series %d + %d\n", i, sum);
        i = i+1;
    }
    printf("The series is %d\n", sum);
}
