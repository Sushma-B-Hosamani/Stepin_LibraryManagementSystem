/**
 * @file add.c
 * @author Sushma H
 * @brief Function to add the books
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
Book *book;

void number()
{
int ch;
printf("\n Enter total number of book you want to add in the library\n Enter integer greater than 0\n");
scanf("%d",&size);

book=(Book*) malloc(sizeof(Book)*size);
menu();
}

void addbook()
{
int c;
printf ("\nEnter book name = ");
gets(book[count].title);

printf ("\nEnter author name = ");
gets(book[count].author);

printf ("Enter pages = ");
scanf ("%d",&book[count].pages);

printf ("Enter price = ");
scanf ("%f",&book[count].price);
count++;

printf("\n\nPress 0 to go back to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            menu();
        else
            exit1();
    
}
