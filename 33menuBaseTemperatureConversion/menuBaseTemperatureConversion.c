
#include<stdio.h>
int main()
{
    int choice;
    float temp, convertarTemp;
    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            printf("Enter the Fahrenheit temperature : ");
            scanf("%f", &temp);
            convertarTemp = (temp-32)/1.8;
            printf("The temperature in Celsius is : %.1f\n", convertarTemp);
            break;
        }
        case 2:
        {
            printf("Enter the Celsius temperature : ");
            scanf("%f", &temp);
            convertarTemp = (1.8*temp)+32;
            printf("The temperature in Fahrenheit is : %.1f\n", convertarTemp);
            break;
        }
        default:
            printf("Not a correct Option");
    }
}
