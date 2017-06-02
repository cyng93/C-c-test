// semantic_test/var_decl_init_neg4.c

/*
 * 2 - VARIABLE/CONST DECLARATION & INITIALIZATION (NEGATIVE TEST)
 */

// 2.4 - return error if number of given literal is more than size of array

void f1()
{
    float f1 = 1.0, f2 = 2.0, f3 = 3.0;
    int i[2] = {1, 2, 3};         // error - given more literal than array size
    float f[2] = {f1, f2, f3};    // error - given more literal than array size
    int x[2] = {};
}

