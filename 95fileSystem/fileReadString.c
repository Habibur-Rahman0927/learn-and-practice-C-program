


#include<stdio.h>
int main()
{

    FILE *file;
    char ch[40];
    int age;
    file = fopen("test.txt", "r");
    if(file == NULL)
        printf("file doesn't exist");
    else
    {
        printf("file is open\n");
        while(!feof(file))
        {
            fgets(ch, 39, file);
            printf("%s\n",ch);
        }
        fclose(file);
    }
}
