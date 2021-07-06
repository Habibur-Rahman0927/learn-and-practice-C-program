#include<stdio.h>
int main()
{
    char lower, uppercase;
    //printf("Enter any lowercase letter: ");
    //scanf("%c",&lower);//97-32= 65 A this ascii value;

    //printf("The uppercase letter :  %c", lower-32);


    printf("Enter any Uppercase letter: ");
    scanf("%c",&uppercase);
    printf("The Lowercase letter : %c", uppercase+32);//different of 32;
}
