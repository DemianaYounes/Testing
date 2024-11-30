#ifdef TEST

#include "unity.h"

#include "Calc.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Calc_Calculation_Sum_Add_Mul_Div_Result(void)
{
    TEST_ASSERT_EQUAL(11,Calc_voidStart(Calc_intSum));
    TEST_ASSERT_EQUAL(1,Calc_voidStart(Calc_intSub));
    TEST_ASSERT_EQUAL(30,Calc_voidStart(Calc_intMul));
    TEST_ASSERT_EQUAL(1,Calc_voidStart(Calc_intDiv));
}

void test_Calc_Calculation_Sum_Result(void)
{
    TEST_ASSERT_EQUAL(10,Calc_intSum(7,3));
}

void test_Calc_Calculation_Sub_Result(void)
{
    TEST_ASSERT_EQUAL(4,Calc_intSub(7,3));
}

void test_Calc_Calculation_Mul_Result(void)
{
    TEST_ASSERT_EQUAL(21,Calc_intMul(7,3));
}

void test_Calc_Calculation_Div_Result(void)
{
    TEST_ASSERT_EQUAL(3,Calc_intDiv(15,5));
}


#endif // TEST
