#include "logic.h"
#include "unity.h"

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(4, add(2, 2));
    TEST_ASSERT_NOT_EQUAL(5, add(2, 2));
}

void test_logic_substract(void)
{
    TEST_ASSERT_EQUAL(9, substract(11, 2));
    TEST_ASSERT_NOT_EQUAL(22, substract(9, 7));
}

void test_logic_multiplication()
{
    TEST_ASSERT_EQUAL(16, multiply(8, 2));
    TEST_ASSERT_NOT_EQUAL(12, multiply(6, 6));
}

void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(2.5,divide(5,2));
    TEST_ASSERT_NOT_EQUAL(10,divide(30,2));
}

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_substract);
    RUN_TEST(test_logic_multiplication);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
