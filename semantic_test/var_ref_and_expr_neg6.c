// semantic_test/var_ref_and_expr_neg6.c

/*
 * 3 - VARIABLE/ARRAY REFERENCES AND EXPRESSION (NEGATIVE TEST)
 */

// 3.6 - return error when performance relational operator on invalid data type

void f1()
{
  int a = 1;
  float b = 2.0;
  double c = 3.0;
  bool d = true;
  string e = "test";

  bool x = (a<d), y = (b<=e);// error due to invalid operand datatype for relop 
  bool z;
  z = (c==d);               // error due to invalid operand datatype for relop
  z = (false != e);         // error due to invalid operand datatype for relop
  z = "test" >= 3.0;        // error due to invalid operand datatype for relop
  z = 3.0 > false;          // error due to invalid operand datatype for relop
}
