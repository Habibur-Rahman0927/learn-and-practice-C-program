#include<stdio.h>
#include<math.h>
int main()
{
    double x = 10.5, y = 1, ex= 1, sa = 0.35;
    double result = log(x), result1 = log10(y), result2 = exp(ex), result3 = sin(sa);

    printf("Log(%lf) = %lf\n", x, result);
    printf("Log10(%lf) = %lf\n", y, result1);
    printf("Expo(%lf) = %lf\n", ex, result2);
    printf("Sin(%lf) = %lf\n", sa, result3);

}
