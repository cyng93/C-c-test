// semantic_test/var_ref_and_expr_neg4.c

/*
 * 3 - VARIABLE/ARRAY REFERENCES AND EXPRESSION (NEGATIVE TEST)
 */

// 3.4 - return error when performance modular op on invalid data type

void f1()
{
  int a;
  float b = 2.0;
  double c = 3.0;

  a = 5 % 1.0;      // error due to invalid operand type for modular operator
  a = 10 % b;       // error due to invalid operand type for modular operator
  a = 15 % c;       // error due to invalid operand type for modular operator
  a = 20 % true;    // error due to invalid operand type for modular operator
}
