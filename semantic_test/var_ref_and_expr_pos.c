// semantic_test/var_ref_and_expr_pos.c

/*
 * 3 - VARIABLE/ARRAY REFERENCES AND EXPRESSION (POSITIVE TEST)
 */

// 3.1 - array reference is valid if its index is integer value greater/equal to zero.
// 3.2 - array can be use in parameter passing
// 3.3 - arithmetic operation can be perform successfully if both operand are
//       one of the following type: int, float, double.
//       compact type can be coercion into wider type successfully in the operation.
// 3.4 - modular operation can be perform successfully if both operand are integers
// 3.5 - logical operation can be perform succesfully if operands are boolean
// 3.6 - relational operation < <= >= > != == can be performs successfully if operands
//       are one of the following type: int, float, double
//       relational operation == != can be performs successfully if operands are one of
//       the following type: int, float, double, boolean.
//       compact type can be coercion into wider type successfully in the operation.

void f0(int a[5])
{
  double xx = 1.2;
  double x[3] = {1, 1.0, xx};
}

void f1()
{
    int a[5];
    a[0] = 1;                   // array with reference index > 0 is allowed
    a[4] = 5;                   // array with reference index > 0 is allowed

    f0(a);                      // array can be passed as parameter
}

float f2()
{
    return 1 + 2.0;             // arithmetic operation can be perform on
                                // different data type(int, float, double)
}

double f3()
{
    double x = 3.0;             // arithmetic operation can be perform on
                                // different data type (int, float, double)
    double y = 1/x;
    return x / 2;               // and return of arithmetic op will be promoted
                                // to match the most general data type
}

void f4()
{
    int x = 15 % 2;
}

bool f5()
{
  int a = 5;
  if(3.0 > 5){
    return (3.0 > 5);
  }
  else{
    while(a >= 0.0){
      a = a - 1;
      return (a==0);
    }
    return (3.0 > 1 == true);
  }
}
