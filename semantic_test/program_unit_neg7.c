// testcases/program_unit_neg7.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.7 - return error if function doesn't return and its return type isn't void 

float f2();

int f1()
{
    a = 0;
}                   // error due to no return stmt was found

float f2()
{
    f1();
}                   // error due to no return stmt was found
