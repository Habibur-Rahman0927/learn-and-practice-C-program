#include<stdio.h>

int main()
{

    double base, exp, result;
    printf("enter base = ");
    scanf("%lf", &base);

    printf("enter exp = ");
    scanf("%lf", &exp);

    result = pow(base, exp);
    printf("%.lf", result);
}
