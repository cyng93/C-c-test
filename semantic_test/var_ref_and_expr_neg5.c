// semantic_test/var_ref_and_expr_neg5.c

/*
 * 3 - VARIABLE/ARRAY REFERENCES AND EXPRESSION (NEGATIVE TEST)
 */

// 3.5 - return error when performance logical op on invalid data type

void f1()
{
  bool a;
  int b = 1;
  float c = 2.0;
  double d = 3.0;

  a = !b;               // error due to invalid operand type for operator !
  a = b && c;           // error due to invalid operand type for operator &&
  a = c || d;           // error due to invlaid operand type for operator ||
  a = true || false;
}
