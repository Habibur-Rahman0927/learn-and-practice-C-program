#include<stdio.h>
int main()
{
    int x = 5;
    int *p = &x;
    printf("value of x = %d\n",x);
    printf("Address of x = %d\n",&x);
    printf("Address of x value = %d\n",*p);
    printf("Address of x value = %d\n",&p);



}
