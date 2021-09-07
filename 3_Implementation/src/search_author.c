/**
 * @file search_author.c
 * @author Sushma H
 * @brief Function to search the book by the author
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "struct.c"

extern int count;
extern int size;
extern Book *book;

void listofbooks_by_author()
{

char btitle[30];
int i;
printf ("Enter author name : ");
scanf ("%s",btitle);
for (i=0; i<count; i++)
{
if (strcmp(btitle, book[i].author)==0)
{
system("cls");
printf ("%s \t %s \t %d \t %f",book[i].title,book[i].author,book[i].pages,book[i].price);
}
}
if (flag != 1)
    {
        printf("No book found");
        flag = 0;
    }

}
