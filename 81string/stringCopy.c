#include<stdio.h>
int main()
{

    char source[] = "c programming";
    char target[20];
    strcpy(target, source);
    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);

    char str1[] = "My name is ";
    char str2[] = "Habibur Rahman";

    strcat(str1, str2);
    printf("str1 = %s\n", str1);


    char str3[50] = "This is Habibur ";
    char str4[] = "Rahman Rock";

    int i = 0, len = 0,j=0;

    while(str3[i] != '\0')
    {
        i++;
        len++;
    }

    while(str4[j] != '\0')
    {

        str3[len+j] = str4[j];
        j++;
    }
    printf("str1 = %s\n", str3);
}
