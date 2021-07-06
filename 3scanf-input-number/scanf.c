#include<stdio.h>//& amber sign
int main()
{


    int num, num1=20, num2;

    printf("Enter Two integer number : ");
    scanf("%d %d",&num,&num2);
    //printf("Enter Second number : ");
    //scanf("%d",&num2);

    printf("The Two integer is %d,%d\n",num,num2);
    printf("Num1 is : %d\n", num1);
    printf("All number is %d,%d,%d\n",num, num1, num2);

    float num3, num4;
    printf("Enter a Two float number : ");
    scanf("%f %f",&num3,&num4);
    printf("The Floating number is : %.1f,%.1f\n", num3, num4);

    //print int and float number
    printf("Enter an integer and float number : ");
    scanf("%d %f",&num,&num4);
    printf("The integer number and floating number is : %d, %.1f",num,num4);
}
