#include<stdio.h>
int main()
{
    FILE *file;
    char fname[20];
    char lname[20];
    file = fopen("test.txt", "r");
    if(file == NULL)
        printf("File doesn't exist");
    else{
        printf("file is Opened\n");

        fscanf(file, "%s %s",&fname, &lname);
        printf("%s%s\n", fname,lname);
        fclose(file);
    }
}
