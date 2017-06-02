// semantic_test/stmt_neg5.c

/*
 * 5 - STATEMENTS (NEGATIVE TEST)
 */

// 5.5 - [for]
//        - for loop can be evaluate successfully only when variable used in
//          init_expr were declared before it was used, and conditional_expr is
//          valid boolean_expr
//      - return error if accessing varible not yet declared in init_expr, or
//        having a non-boolean type conditional_expr in for loop

void f1()
{
  int b = 0;
  for(a = 0; b < 5; b = b + 1)    // error due to accessing undeclared var in init-expr
  {
    read b;
  }

  for(b=0; "test"; b=b+1){        // error due to non-boolean expr in cond-expr
    print b;
  }
}
