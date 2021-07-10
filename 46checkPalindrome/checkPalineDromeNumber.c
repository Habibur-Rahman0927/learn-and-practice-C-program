#include<stdio.h>
int main()
{
    int num, sum = 0, temp, r;
    printf("Enter any number : ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        r = temp%10;
        sum = sum *10 + r;
        temp = temp/10;
    }
    if(num == sum){
        printf("PalinDrome Number. %d", sum);
    }else{
        printf("Not PalinDrome Number. %d", sum);
    }
}
