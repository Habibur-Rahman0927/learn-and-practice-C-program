#include<stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;

    printf("Enter Three Integer number : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    avg = (float)sum/3;

    printf("The sum of three Numbers : %d\n", sum);

    printf("The avg of three number : %f\n",avg);
}
