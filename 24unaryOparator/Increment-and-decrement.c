#include<stdio.h>
int main()
{
    int x = 10;
    //int y = x++; // post increment
    //int y = ++x; // pre increment
    //int y = x--; //post decrement
    //int y = --x; // pre decrement
    //printf("x = %d\n", x);
    //printf("y = %d\n", y);

    printf("%d\n", x++);
    printf("%d\n\n", x++);
    printf("%d\n", ++x);
    printf("%d\n\n", ++x);
    printf("%d\n", x--);
    printf("%d\n\n", x--);
    printf("%d\n", --x);
    printf("%d\n", --x);
}
