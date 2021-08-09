

#include<stdio.h>
int main()
{

    FILE *file;
    char name[30];
    char ch;
    int age;
    file = fopen("test.txt", "r");
    if(file == NULL)
        printf("file doesn't exist");
    else
    {
        printf("file is open\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
}
