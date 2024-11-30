#include "src/Calc.h"
#include "Install/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_Calc_Calculation_Sum_Add_Mul_Div_Result(void)

{

    UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((Calc_voidStart(Calc_intSum))), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((Calc_voidStart(Calc_intSub))), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((Calc_voidStart(Calc_intMul))), (

   ((void *)0)

   ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((Calc_voidStart(Calc_intDiv))), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}



void test_Calc_Calculation_Sum_Result(void)

{

    UnityAssertEqualNumber((UNITY_INT)((10)), (UNITY_INT)((Calc_intSum(7,3))), (

   ((void *)0)

   ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

}



void test_Calc_Calculation_Sub_Result(void)

{

    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((Calc_intSub(7,3))), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

}



void test_Calc_Calculation_Mul_Result(void)

{

    UnityAssertEqualNumber((UNITY_INT)((21)), (UNITY_INT)((Calc_intMul(7,3))), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

}



void test_Calc_Calculation_Div_Result(void)

{

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((Calc_intDiv(15,5))), (

   ((void *)0)

   ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_INT);

}
