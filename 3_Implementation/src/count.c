/**
 * @file count.c
 * @author Sushma H
 * @brief Function to count the total number of books
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

void countbook()
{
    int c;
printf("\n No of books in library : %d", count);

printf("\n\nPress 0 to go back to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            menu();
        else
            exit1();
        
}
