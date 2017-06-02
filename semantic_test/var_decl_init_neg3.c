// semantic_test/var_decl_init_neg3.c

/*
 * 2 - VARIABLE/CONST DECLARATION & INITIALIZATION (NEGATIVE TEST)
 */

// 2.3 - return error while var/array is being initialized with data that type
//       is different from var/array type.

void f1()
{
    int i = 1;
    float f = 2.2;

    int tmpi1 = f;                            // error var init type mismatched
    int tmpi2 = 3.3, tmpi3 = "test_string";   // error var init type mismatched

    float tmpf1 = i;                          // error var init type mismatched
    float tmpf2[2] = {2.0, 3}, tmpf3[2] = {1.0, true};  // error var init type mismatched
}
