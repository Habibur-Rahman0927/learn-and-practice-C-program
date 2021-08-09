#include<stdio.h>
int main()
{
    int x = 10, y = 20, sum;

    int *prt1, *prt2;
    prt1 = &x;
    prt2 = &y;

    sum = *prt1 + *prt2;
    printf("Sum is = %d\n", sum);
}
