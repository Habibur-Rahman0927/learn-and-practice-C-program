#include<stdio.h>
int main()
{
    FILE *file;

    char name[20];
    int age, phoneNumber, num;

    file = fopen("student.txt", "a");

    if(file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter number of students : ");
        scanf("%d", &num);

        for(int i= 1; i<=num; i++)
        {
            printf("Enter student Name : ");
            scanf("%s", &name);
            printf("Enter student Age : ");
            scanf("%d", &age);

            printf("Enter student Phone Number : ");
            scanf("%d", &phoneNumber);

            fprintf(file, "%s\t\t%d\t\t%d", name, age,phoneNumber);
        }
        fclose(file);
    }




    getch();
}
