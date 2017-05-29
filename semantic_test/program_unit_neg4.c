// testcases/program_unit_neg4.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.4 - return error when invoke func before it was declared or defined

float f2(bool x)
{
    f1();           // error due to invoking func before decl/def
    return 0.0;
}

void f1()
{
}
