#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter N = ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        sum = sum + i*i;
    }
    printf("%d", sum);
}
