// semantic_test/program_unit_neg2.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.2 - return error when function definition differ from its declaration

void f1();
int f2(bool x);

float f2(bool x)        // error due to different return type from func decl
{
    if(x){
        return 1.0;
    }
    return 0.0;
}

int main()
{
    f1();
    f2(true);
    f2(false);

    return 0;
}

void f1(float x)        // error due to differnt params type from func decl
{
}
