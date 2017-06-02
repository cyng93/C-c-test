// semantic_test/stmt_neg1.c

/*
 * 5 - STATEMENTS (NEGATIVE TEST)
 */

// 5.1 - [compound]
//      - return error when accessing varible declared in inner scope

void f1()
{
  while(true){
    int a = 1;
    float b = 2;
  }
  b = a * 1;        // error due to accessing variable in inner scope * 2
  print b;          // error due to accessing variable in inner scope
  read c;           // error due to accessing undeclared variable
}
