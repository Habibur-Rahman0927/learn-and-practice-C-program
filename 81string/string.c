#include<stdio.h>
int main()
{
    char s1[5];
    s1[0] = 'A';
    s1[1] = 'B';
    s1[2] = 'C';
    s1[3] = 'D';
    s1[4] = '\0';


    printf("s1 = %s\n", s1);
    char s2[] = {'H', 'A', 'B', 'I', 'B','\0'};
    printf("s2 = %s\n", s2);
}
