// write a program that print an integer, floating, char, double
// write a program that take a integer number in user
/* format specifier     int %d,%i,  char %c,    float %f,   double %lf, long */
#include<stdio.h>
int main()
{
    int num = 100,num3 = 50;
    printf("Number are %d,%d \n",num,num3);

    float num1 = 10.5;
    double num2 = 10.556545;
    char ch = 'a';

    printf("num1 = %.1f \n",num1);
    printf("num2 = %lf \n",num2);
    printf("ch = %c \n",ch);

    int num4;
    printf("Please enter an integer: ");
    scanf("%d",&num4);
    printf("You have pressed : %d\n", num4);

}
