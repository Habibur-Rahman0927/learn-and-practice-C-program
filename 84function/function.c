#include<stdio.h>
int sum(int a, int b, int c) // this is return function
{
    printf("%d\n", a+b+c);
   return a+b+c;
}

void sub(int a, int b, int c)//don't return
{
    printf("%d\n", a-b-c);
}
int main()
{
    sub(9,9,9);
    printf("The sum is : %d\n", sum(9,9,9));


}

