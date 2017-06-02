// semantic_test/program_unit_neg5.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.5 - return error when func trying to return non scalar type (array)
float f2();

int f1()
{
    int a[2][3];
    return a[1];        // error due to returning non-scalar type
}

float f2()
{
    float a[2];
    return a;           // error due to returning non-scalar type
}
