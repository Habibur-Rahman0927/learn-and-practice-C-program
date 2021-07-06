// area of rectangle  = height*width;

#include<stdio.h>
int main()
{
    float height, width, area;
    printf("Enter height = ");
    scanf("%f", &height);

    printf("Enter width = ");
    scanf("%f", &width);

    area = height * width;
    printf("The Rectangle Area is = %.2f", area);
}
