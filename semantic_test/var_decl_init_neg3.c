// semantic_test/var_decl_init_neg3.c

/*
 * 2 - VARIABLE/CONST DECLARATION & INITIALIZATION (NEGATIVE TEST)
 */

// 2.3 - return error while var/array is being initialized with data that type
//       is different from var/array type.

#pragma symbol on
void f1()
{
    int i;
    i = 1;
    float f = 2.2;

    int tmpi1 = f;
    int tmpi2 = 3.3, tmpi3 = "test_string";

    float tmpf1 = i;
    float tmpf2[2] = {2.0, 3}, tmpf3[2] = {1.0, true};
}
