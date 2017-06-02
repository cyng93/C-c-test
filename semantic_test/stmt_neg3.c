// semantic_test/stmt_neg3.c

/*
 * 5 - STATEMENTS (NEGATIVE TEST)
 */

// 5.3 - [simple]
//      - return error when assignment are perform within two variable/literal
//        having different data type.

void f1()
{
  int a = 0;
  a = true;           // error due to different datatype assignment
  float b = "test";   // error due to different datatype assignment
}
