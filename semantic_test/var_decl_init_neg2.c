// semantic_test/var_decl_init_neg2.c

/*
 * 2 - VARIABLE/CONST DECLARATION & INITIALIZATION (NEGATIVE TEST)
 */

// 2.2 - return error for array decl with index less or equal to 0

void f1()
{
    int a[1];
    int b[0];         // error due to invalid array references index
    int c[1][-1];     // error due to invalid array references index
}
