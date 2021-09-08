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

#include "fun.h"
#include "struct.c"

extern int count;
extern int size;
extern Book *book;

void books_by_title()
{
    int flag=0,c;
char btitle[30];
int i;
printf ("Enter book title:");
scanf ("%s",btitle);
for (i=0; i<count; i++)
{
if (strcmp(btitle, book[i].title) == 0)
{

printf ("\n %s \t %s \t %d \t %f",book[i].title,book[i].author,book[i].pages,book[i].price);
flag=1;
}
}
if (flag!= 1)
    {
        printf("No book found");
        flag = 0;
    }
printf("\n\nPress 0 to go back to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            menu();
        else
            exit1();
    
}
