
#include "fun.h"
#include "struct.c"

extern int count;
extern int size;
Book *book;

void number()
{
int ch;
printf("\n Enter total number of book you want to add in the library\n Enter integer greater than 0\n");
scanf("%d",&size);

book=(Book*) malloc(sizeof(Book)*size);
}

void addbook()
{

printf ("\nEnter book name = ");
gets(book[count].title);

printf ("\nEnter author name = ");
gets(book[count].author);

printf ("Enter pages = ");
scanf ("%d",&book[count].pages);

printf ("Enter price = ");
scanf ("%f",&book[count].price);
count++;

}
