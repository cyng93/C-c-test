// semantic_test/var_ref_and_expr_neg3.c

/*
 * 3 - VARIABLE/ARRAY REFERENCES AND EXPRESSION (NEGATIVE TEST)
 */

// 3.3 - return error when performance arithmetic op on invalid date type

void f1()
{
  int a = 1 + "test";         // error due to invalid operand for operator +
  float b = 1.0 - true;       // error due to invalid operand for operator -
  double c = 1.0 * false;     // error due to invalid operand for operator *
  string d = "foo" / "bar";   // error due to invalid operand for operator /

  string p, q;
  p = "compiler";
  q = p;
  q = q + p;                  // error due to invalid operand for operand +
}
