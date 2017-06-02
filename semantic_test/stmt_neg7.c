// semantic_test/stmt_neg7.c

/*
 * 5 - STATEMENTS (NEGATIVE TEST)
 */

// 5.7 - [function invocation]
//        - function can be invoked successfully when type of parameter passed
//          in are identical to its decl/def, as well as number of param provided
//          are as number of params decl/def.
//        - function return can be discard by caller
//
//      - return error when invoking function with parameter that type doesn't
//        matched its decl/def.
//      - return error when invoking function by providing more/less parameter
//        then user decl/def

void f1_bar(int a, string b, boolean c)
{
}

void f1()
{
  int a=0;
  float b = 2.0;

  f1_bar(a, true, "test");    // error due to passing undesired type to func

  f1_bar(a, "test");          // error due to passing not enough params to func

  f1_bar(a, "test", false, b);// error due to passing too much params to func
}
