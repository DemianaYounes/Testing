/*
 * UnityAPP_Test1.c
 *
 * Created: 11/26/2024 10:36:53 PM
 * Author : Demiana Younes
 */ 
#define F_CPU 8000000
#include <util/delay.h>

#include "StdTypes.h"
#include "Utils.h"
#include "MemMap.h"
#include "DIO_interface.h"
#include "UART_Interface.h"
#include "unity.h"

void setUp(void)
{

}
void tearDown(void)
{
	
}
void test_add1_check(void);
void test_add2_check(void);
void test_add3_check(void);
s32 AddFunc(s32 num1,s32 num2);
int main(void)
{
	DIO_Init();
	UART_Init(9600);
    /* Replace with your application code */
	UNITY_BEGIN();
	RUN_TEST(test_add1_check);
	RUN_TEST(test_add2_check);
	RUN_TEST(test_add3_check);
	UNITY_END();
    while (1) 
    {
    }
}

s32 AddFunc(s32 num1,s32 num2)
{
	return num1+num2;
}

void test_add1_check(void)
{
	TEST_ASSERT_EQUAL(3,AddFunc(1,2));
}

void test_add2_check(void)
{
	TEST_ASSERT_EQUAL(5,AddFunc(-1,2));
}
void test_add3_check(void)
{
	TEST_ASSERT_EQUAL(-1,AddFunc(1,-2));
}

