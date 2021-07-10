#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Letter is capital %c", ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Letter is small %c", ch);
    }
    else{
        printf("Not a letter");
    }
}
