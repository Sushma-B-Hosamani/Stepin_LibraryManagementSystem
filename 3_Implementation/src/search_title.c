#include "fun.h"
#include "struct.c"

extern int count;
extern int size;
extern Book *book;

void books_by_title()
{
char btitle[30];
int i;
printf ("Enter book title:");
scanf ("%s",btitle);
for (i=0; i<count; i++)
{
if (strcmp(btitle, book[i].title) == 0)
{
system("cls");
printf ("%s \t %s \t %d \t %f",book[i].title,book[i].author,book[i].pages,book[i].price);
}
else
printf("Book not found\n");
}

}
