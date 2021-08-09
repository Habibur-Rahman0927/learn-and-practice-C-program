#include<stdio.h>
void swapping(int *ptr1, int*ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("x = %d\n", *ptr1);
    printf("y = %d", *ptr2);
}


int main()
{

    int x = 10, y = 20, temp;

    swapping(&x, &y);





}
