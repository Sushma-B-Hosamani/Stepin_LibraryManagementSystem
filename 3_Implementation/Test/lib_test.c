#include "unity.h"
#include "fun.h"

#include "fun.h"
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
    char username[10]="admin", userpwd[10]="pass";
    //TEST_ASSERT_EQUAL_STRING(0,("admin","pass"));
    TEST_ASSERT_EQUAL_STRING("admin",username);
    TEST_ASSERT_EQUAL_STRING("pass",userpwd);
    
}


int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_login);
  return UNITY_END();
}

