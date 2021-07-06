#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    if(num > 0){
        printf("This is positive number");
    }
    else if(num < 0){
        printf("This is Negative number");
    }
    else{

        printf("This is zero");
    }
}
