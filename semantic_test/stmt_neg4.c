// semantic_test/stmt_neg4.c

/*
 * 5 - STATEMENTS (NEGATIVE TEST)
 */

// 5.4 - [condition & while]
//        - if and while can be evaluate successfully, only if the conditional expr
//          is valid boolean expr.
//      - return error if conditional expr in if/while loop isn't valid boolean expr

void f1()
{
  int a = 1;
  while(a){       // error due to non-boolean expr in while cond-expr
    read a;
  }

  do{
    print a;
  } while(1.23);  // error due to non-boolean expr in while cond-expr


  if("error"){    // error due to non-boolean expr in while cond-expr
    read a;
  }
  else{
    print a;
  }
}
