#include<stdio.h>
double trinagleArea(double b, double h)
{
    return 0.5*b*h;
}


int main()
{
    double base, height;

    printf("Enter basa and height : ");

    scanf("%lf%lf", &base, &height);

    printf("Area is %.lf\n",trinagleArea(base, height));
}
