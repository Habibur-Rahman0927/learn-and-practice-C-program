
#include<stdio.h>
int main()
{

    FILE *file;
    char name[30];
    int age;
    file = fopen("test.txt", "a");
    if(file == NULL)
        printf("file doesn't exist");
    else
    {
        printf("file is open\n");
        printf("Enter your name : ");
        gets(name);

        printf("Enter your age : ");
        scanf("%d", &age);

        fprintf(file, "Name: %s\nAge : %d", name,age);
        printf("File is written successfully");
        fclose(file);
    }
}
