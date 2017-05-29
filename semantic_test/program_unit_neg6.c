// testcases/program_unit_neg6.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.6 - return error when func returning type different from what it decl/def
void f2();

int f1()
{
    float a[2] = {1.0, 0.0};
    return a[0];        // error due to returning type different from decl/def
}

void f2()
{
    int a = 5;
    const float b = 0.0;

    return a;           // error due to returning type different from decl/def
    return b;           // error due to returning type different from decl/def
    return "a_string";  // error due to returning type different from decl/def
    return 1;           // error due to returning type different from decl/def
}
