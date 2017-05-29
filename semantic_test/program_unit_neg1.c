// testcases/program_unit_neg1.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.1 - return error when program has no function definition

void f1();
float f2(bool x);
int main();                 // error as no func def was found
