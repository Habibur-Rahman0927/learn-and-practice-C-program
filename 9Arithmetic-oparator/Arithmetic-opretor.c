#include<stdio.h>
int main()
{
    int num1, num2, result;

    printf("Enter two number : ");
    scanf("%d %d", &num1, &num2);

    result = num1 + num2;
    printf("The number of sum is = %d\n",result);

    result = num1 - num2;
    printf("The number of sum is = %d\n",result);

    result = num1 / num2;
    printf("The number of sum is = %d\n",result);

    result = num1 * num2;
    printf("The number of sum is = %d\n",result);


}
