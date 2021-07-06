#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter First number : ");
    scanf("%d", &num1);

    printf("Enter Second number : ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("The num1 is large than num2");
    }
    else if(num1 < num2){
        printf("The num2 is large than num1");
    }
    else{
        printf("Two num is equal");
    }
}
