#include<stdio.h>
int main()
{
    /*int time = 10;
    if(time == 10)
    {
        printf("Good Morning");
        printf(" Habib");
    }
    else
    {
        printf("Sorry is not morning");
        printf(" Habib");
    }*/

    int num1, num2;

    printf("Enter First number : ");
    scanf("%d", &num1);

    printf("Enter Second number : ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Large = %d", num1);
    }
    else if(num1 < num2){
        printf("Large = %d", num2);
    }
    else{
        printf("Number are equal");
    }

}
