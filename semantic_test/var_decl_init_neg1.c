// semantic_test/var_decl_init_neg1.c

/*
 * 2 - VARIABLE/CONST DECLARATION & INITIALIZATION (NEGATIVE TEST)
 */

// 2.1 - return error for value reassignment to const var,
//       return error for const re-declare(duplicated name).

void f1()
{
    const int a = 1;
    //const float a = 2.0;    // error due to var re-declaration
    const float a = 1.0, x = 2.0;
    int b = 0;

    a = 2;                  // error due to val assignment to const var
    b = 2;
}
