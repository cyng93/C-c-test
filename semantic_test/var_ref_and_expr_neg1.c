// semantic_test/var_ref_and_expr_neg1.c

/*
 * 3 - VARIABLE/ARRAY REFERENCES AND EXPRESSION (NEGATIVE TEST)
 */

// 3.1 - return error if array references index is less than 0

void f1()
{
  int a[5];
  a[-1] = 0;          // error due to array references index less than 0

  int b[-2] = {};     // error due to array references index less than 0
}
