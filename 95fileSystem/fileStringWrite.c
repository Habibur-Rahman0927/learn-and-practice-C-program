#include<stdio.h>
int main()
{
    char name[30];
    FILE *file;
    file = fopen("test.txt", "a");
    if(file == NULL)
        printf("file doesn't exist");
    else
    {
        printf("file is open\n");
        printf("Enter your full name : ");
        gets(name);

        fputs(name, file);
        fputs("\n", file);
        printf("File is written successfully");
        fclose(file);
    }
}
