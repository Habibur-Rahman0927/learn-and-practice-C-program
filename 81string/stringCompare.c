#include<stdio.h>
int main()

{
    char str1[] = "Habibur Rahman";
    char str2[] = "Habibur Rahman";

    int d = strcmp(str1,str2);
    if(d == 0)
    {
        printf("String are equal");
    }
    else{
        printf("String are not equal");
    }
}
