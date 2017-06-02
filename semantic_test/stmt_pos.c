// semantic_test/stmt_pos.c

/*
 * 5 - STATEMENTS (POSITIVE TEST)
 */

// 5.1 - [compound]
//        - declaration in a specify inner loop are visible to only current scope.
//      - return error when accessing varible declared in inner scope
//
// 5.2 - [simple]
//        - print and read can be perform successfully on scalar type variable
//      - return error when performing print/read on non-scalar type variable
//
// 5.3 - [simple]
//        - assignment from one literal/var to another variable can be perform
//          successfully if LHS & RHS has same data type after coercion.
//      - return error when assignment are perform within two variable/literal
//        having different data type.
//
// 5.4 - [condition & while]
//        - if and while can be evaluate successfully, only if the conditional expr
//          is valid boolean expr.
//      - return error if conditional expr in if/while loop isn't valid boolean expr
//
// 5.5 - [for]
//        - for loop can be evaluate successfully only when variable used in
//          init_expr were declared before it was used, and conditional_expr is
//          valid boolean_expr
//      - return error if accessing varible not yet declared in init_expr, or
//        having a non-boolean type conditional_expr in for loop
//
// 5.6 - [jump]
//        - break and continue can be successfully evaluate in loop
//      - return error when having break and continue outside loop.
//
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

void f1()
{
  string a;
  string x = "test";
  if(true){
    int a;
    int b = 2;
    a = b * 3;      // legal because in this inner scope a is declared as int
  }

  a = x;            // legal as well because in this scope a is string-type
}

void f2()
{
  int a = 1;
  float b = 2.0;
  double c = 3.0;

  print a;          // legal to perform read/print on scalar type var/literal
  read b;
  print c;
  read true;
  print "test";
}

void f3()
{
  int a = 3;
  float b = a;      // legal because int can be coercion to float
  double c;

  c = b + a;        // legal because both b(float) and a(int) can be coercion
                    //  before doing + operation and begin assigned to c(double)
}


void f4()
{
  int a = 10;
  boolean x;
  if ((1010/a) < 5) {
    x = false;
  }
  else{
    x = true;
  }

  while(a >= 0){
    a = a - 1;
  }
}

void f5()
{
  int a;
  for(a = 0; a < 5; a = a + 1){
    print a;
  }
}

void f6()
{
  int a = 5;

  while(true){
    if(a > 100){
      break;
    }
    a = a * 2;
  }

  for(a = 0; a < 10; a = a + 1){
    if(a % 2 == 0){
      continue;
    }
    print a;
  }
}

int f7_bar(int p1, float p2[3], boolean p3)
{
  return 1;
}

void f7()
{
  int a = 1;
  float b[3] = {2.0, 3.0, 4.0};

  f7_bar(a, b[3], true);
}
