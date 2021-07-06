#include<stdio.h>
int main()
{
    double x = 5.99;
    double reuslt = round(x), result = trunc(x),result1 = ceil(x), result2 = floor(x);
    printf("round(%lf) = %lf\n", x, reuslt);
    printf("trunc(%lf) = %lf\n", x, result);
    printf("ceil(%lf) = %lf\n", x, result1);
    printf("floor(%lf) = %lf\n", x, result2);
}
