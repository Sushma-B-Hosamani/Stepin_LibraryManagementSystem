/**
 * @file struct.c
 * @author Sushma H
 * @brief Structure is declared
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdio.h"
#include "string.h"

typedef struct Book
{
char title[30];
char author[30];
int pages;
float price;
}Book;