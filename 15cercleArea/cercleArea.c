// the cercle are = PI*r*r
#include<stdio.h>
#include<math.h>// math.h store the M_PI = 3.1416;
int main()
{
    float redius, area;
    printf("Enter redius : ");

    scanf("%f", &redius);

    area = M_PI * redius * redius;

    printf("The cercle area is : %.2f", area);
}
