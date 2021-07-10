#include<stdio.h>
int main()
{
    int num, sum = 0, temp, r;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0){
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    if(num == sum){
        printf("Armstrong Number %d", sum);
    }else{
        printf("Not Armstrong number %d", sum);

    }
}
