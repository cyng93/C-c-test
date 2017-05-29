// testcases/program_unit_negX.c

/*
 * 1 - PROGRAM UNIT (NEGATIVE TEST)
 */

// 1.1 - program with one or more func_def can be parsed.
// 1.2 - func_def that matches previous func_decl won't return error.
// 1.3 - func can be decl/def if no funciton with same name was decl/def yet
// 1.4 - func that was def or has been decl in previous line can be invoked
// 1.5 - func returning scalar type won't return error.
// 1.6 - func can return type it had decl/def in previous line
// 1.7 - func whose return type is void can exclude returning
// 1.8 - func can early return

void f1();

float f2(bool x)
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
}

void f1()
{
}
