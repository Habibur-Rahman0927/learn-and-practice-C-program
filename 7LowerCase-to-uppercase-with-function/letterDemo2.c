#include<stdio.h>
int main()
{
    char lower, upper,lower1, upper1;
    //printf("Enter any lowercase letter : ");
    //scanf("%c", &lower);

    //upper = toupper(lower);//toupper(function);
    //printf("Uppercase letter %c", upper);

    printf("Enter any Uppercase letter : ");
    scanf("%c", &upper1);

    lower1 = tolower(upper1);//tolower(function);
    printf("Lowercase letter %c", lower1);




}
