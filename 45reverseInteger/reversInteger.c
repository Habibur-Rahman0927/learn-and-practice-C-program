#include<stdio.h>
int main()
{
    int num, sum = 0, temp, r;
    printf("Enter some number : ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        r = temp % 10;
        sum = sum*10+r;
        temp = temp/10;
    }
    printf("%d", sum);
}
