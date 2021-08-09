#include<stdio.h>
int square(a)
{
    return a*a;
}


int main()
{
    int num;
    printf("Enter any Integer number : ");
    scanf("%d", &num);
    printf("square is %d", square(num));
}
