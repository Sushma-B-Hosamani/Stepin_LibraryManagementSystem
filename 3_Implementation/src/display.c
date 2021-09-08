/**
 * @file display.c
 * @author Sushma H
 * @brief Function to display the books
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

void displaybook()
{
int i;

printf("you have entered the following information\n");
for(i=0; i<count; i++)
{
printf ("\nbook name = %s",book[i].title);

printf ("\t author name = %s",book[i].author);

printf ("\t  pages = %d",book[i].pages);

printf ("\t  price = %f",book[i].price);
}
        
}