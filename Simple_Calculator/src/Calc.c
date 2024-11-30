#include "Calc.h"


int Calc_intSum(int Copy_u8Num1,int Copy_u8Num2)
{
    return Copy_u8Num1+Copy_u8Num2;
}

int Calc_intMul(int Copy_u8Num1,int Copy_u8Num2)
{
    return Copy_u8Num1*Copy_u8Num2;
}

int Calc_intSub(int Copy_u8Num1,int Copy_u8Num2)
{
    return Copy_u8Num1-Copy_u8Num2;
}

int Calc_intDiv(int Copy_u8Num1,int Copy_u8Num2)
{
    return Copy_u8Num1/Copy_u8Num2;
}

int Calc_voidStart(int(*Op)(int,int))
{
    int Local_intResult=Op(6,5);
    return Local_intResult;
}