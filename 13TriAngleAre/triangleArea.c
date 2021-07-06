// area = sqrt(s*(s-a)*(s-b)*(s-c))
// s = (a + b + c)/2

#include<stdio.h>
int main()
{

    double a, b, c, s, area;

    printf("Enter Triangle Value : ");

    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c)/2;
    area = sqrt(s*(s - a)*(s - b)*(s - c));

    printf("The triangle area is : %.2lf", area);
}
