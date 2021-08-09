#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter your full name : ");

    //scanf("%s", &s1);
    gets(s1);
    printf("Full name = %s\n", s1);

    char s2[] = "KhanHabib";

    int i = 0, length = 0;
    while(s2[i] != '\0'){
        printf("%c\n", s2[i]);
        i++;
    }

    int len = strlen(s1);
    printf("length = %d\n", len);

    char s3[] = "length without library";

    while(s3[i] != '\0')
    {
        i++;
        length++;
    }
    printf("length = %d\n", length);



}

