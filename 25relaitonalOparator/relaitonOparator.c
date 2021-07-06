/*
>, >=, <, <=, ==, !=, control Statement - conditional control statement, loop control statement;
**conditional statement = if else, switch;

*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num%2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd");
    }

}
