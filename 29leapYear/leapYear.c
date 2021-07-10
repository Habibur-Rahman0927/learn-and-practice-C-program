#include<stdio.h>
int main()
{
    int year;
    printf("Enter any 20year :");
    scanf("%d", &year);
    if(year % 400 == 0){
        printf("year is Leap year");
    }
    else if(year % 4 ==0 && year % 100 != 0){
        printf("year is Leap year");
    }
    else{
        printf("year is not leap year");
    }
}
