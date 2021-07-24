#include<stdio.h>
int main()
{
    int n, mult = 1, i;
    printf("Enter any number : ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        mult = mult*i;
    }
    printf("N multiple number is %d", mult);
}
