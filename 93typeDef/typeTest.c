#include<stdio.h>
struct book
{

    char name[30];
    int price;
};


int main()
{

    typedef struct book Book;
    Book b = {"Hello C program", 350};
    printf("Book name = %s\n", b.name);
    printf("Book price = %d\n", b.price);
    typedef char LETTER;
    LETTER ch;
    LETTER rl;
    rl = 'B';
    ch = 'A';
    printf("ch = %c\n", ch);
    printf("rl = %c\n", rl);
}
