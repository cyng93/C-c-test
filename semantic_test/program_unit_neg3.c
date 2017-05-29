// testcases/program_unit_neg3.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.3 - return error for duplicate function declaration/definition
//     - return error for function declaration after definition

void f1();

float f2(bool x)
{
    return 0.0;
}

int f5()
{
    return 0;
}


void f1();          // error due to func redeclaration

int f2(bool x)      // error due to func redefinition
{
    return 0;
}

int f5();           // error due to func_decl after definition
