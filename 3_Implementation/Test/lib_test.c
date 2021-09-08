/**
 * @file lib_test.c
 * @author Sushma H
 * @brief Test cases 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "fun.h"
#include "unity.h"

#define PROJECT_NAME "Library Management System"
int count=0;
int size;

void test_login(void);

void setUp()
{
}
void tearDown()
{
}

void test_login(void)
{
    char username[10]="admin", password[10]="pass";
    //TEST_ASSERT_EQUAL_STRING(0,("admin","pass"));
    TEST_ASSERT_EQUAL_STRING("admin",username);
    TEST_ASSERT_EQUAL_STRING("pass",password);
    
}


int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_login);
  return UNITY_END();
}
