#include<stdio.h>
int main()
{
    int num[] = {10, 20, 30, 40, 50}, i, sum= 0;
    //num[0] = 1;
    //num[1] = 2;
    //num[2] = 3;
    //num[3] = 4;
    //num[4] = 5;
    //num[5] = 6;
    for(i = 0; i<=4; i++){
        printf("%d\n", num[i]);
        sum = sum + num[i];
        printf("The sum is : %d \n", sum);

    }
    printf("the average is : %.3f\n", (float)sum/5);
}
