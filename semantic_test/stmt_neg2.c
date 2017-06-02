// semantic_test/stmt_neg2.c

/*
 * 5 - STATEMENTS (NEGATIVE TEST)
 */

// 5.2 - [simple]
//      - return error when performing print/read on non-scalar type variable

void f1()
{
  int a[3];

  read b;       // erorr due to read undeclared var
  read a;       // error due to read on non-scalar type
  print a;      // error due to print on non-scalar type
  print c;      // error due to print undeclared var
}
