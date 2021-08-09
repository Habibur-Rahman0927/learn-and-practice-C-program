#include<stdio.h>
void display(char str[])
{
    printf("%s\n",str);
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;

    }
}


int main()
{
    char str[] = "super";
    display(str);
}
