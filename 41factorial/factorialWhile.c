#include<stdio.h>
int main()
{
    int i = 1, fact = 1, n;
    printf("Enter any positive number : ");
    scanf("%d", &n);
    while(i <=n){
            fact = fact*i;
        printf("%d\n", fact);
        i++;
    }
    printf("Factorial number is : %d", fact);

}
