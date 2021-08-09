
#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = "Rockstar";
    int length = strlen(name);

    int i;

    file = fopen("test.txt", "w");
    if(file ==NULL)
    {
        printf("File doesn't exist");
    }
    else{
        printf("File is opened");
        for(i=0; i<length; i++)
        {
            fputc(name[i], file);
        }
        printf("\n file is written successfully");
        fclose(file);
    }
}
