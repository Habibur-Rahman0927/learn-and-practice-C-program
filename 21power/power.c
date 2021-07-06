#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter any number with power : ");
    scanf("%d %d", &x, &y);
    double result = pow(x,y);
    printf("%.1lf", result);
}
