#include<stdio.h>
int main()
{
    int initialNumber, finalNumber, sum = 0, temp, r, i;
    printf("initialNumber value :" );
    scanf("%d", &initialNumber);
    printf("finalNumber value : ");
    scanf("%d", &finalNumber);


    for(i = initialNumber; i<= finalNumber; i++)
    {
        temp = i;
        while(temp != 0)
        {
            r = temp%10;
            sum = sum + r*r*r;
            temp = temp / 10;


        }
        if(sum == i)
        {
            printf("%d\n", i);
        }
        sum = 0;
    }



}
