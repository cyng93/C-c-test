// semantic_test/var_decl_init_pos.c

/*
 * 2 - VARIABLE/CONST DECLARATION & INITIALIZATION (POSITIVE TEST)
 */

// 2.1 - value reassignment to non-const var is allowed,
//       const can be declare if name wasn't taken yet.
// 2.2 - array decl with index greater than 0 can be perform successfully.
// 2.3 - assignment in var/array decl are allowed if RHS has the same data type
//       with LHS after performing type coercion.
// 2.4 - array initialization can be performance succesfully if number of value
//       mentioned in RHS is less of equal to the size of the array.
// 2.5 - array element will be initialized to 0 if number of value provided in
//       RHS is less than the array size ?????? array of str? array of bool?

void main()
{
    int a = 5;
    a = 6;                      // assignment to non-const var is allowed

    const int a_const = 5;
    const float b_const = 5.0;  // const var can be decl if name wasn't taken


    int a1[5];                  // array with index > 0 can be decl successfully

    float f = 1.0;
    f = 1+2.0;                  // var assignment can be perform if LHS & RHS
                                //  type is same after coercion(cover later)

    int ar[2][3] = {1, 2, 3, 4, 5, 6};  // array decl where RHS has same amount
                                        //   of number as array size

    int br[2][3] = {1, 2, 3};           // array decl where RHS has less amount
                                        // of number than array size

}
