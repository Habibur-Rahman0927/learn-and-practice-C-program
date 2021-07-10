// 5! = 1!*2!*3!*4!*5!;
#include<stdio.h>
int main()
{
    int i, fact= 1, n;
    printf("Enter any positive number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact = fact*i;
        printf("%d\n", fact);
    }
    printf("Factorial Number is : %d", fact);
}
