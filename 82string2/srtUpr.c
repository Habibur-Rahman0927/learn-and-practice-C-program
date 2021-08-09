#include<stdio.h>
int main()
{
    char str[] = "Habibur Rahman";
    char str1[] = "HABIBUR RAHMAN";
    strlwr(str1);
    printf("%s", str1);

    strupr(str);
    printf("\n%s", str);
}
