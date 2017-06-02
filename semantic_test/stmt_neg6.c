// semantic_test/stmt_neg6.c

/*
 * 5 - STATEMENTS (NEGATIVE TEST)
 */

// 5.6 - [jump]
//        - break and continue can be successfully evaluate in loop
//      - return error when having break and continue outside loop.

void f1()
{
  if(true){
    continue;   // error due to having continue stmt outside loop
  }

  break;        // error due to having break stmt outside loop
}

void f2()
{
  while(true){
    continue;
    if(true){
      break;
    }
  }
  continue;     // error due to having continue stmt outside loop
}
