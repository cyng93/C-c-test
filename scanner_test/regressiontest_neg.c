#pragma edf on      // error should be at character 'e'
.123                // error should be at character '.'
123e+abc            // shouldn't return scientific token <123e+>

/*
 * #pragma .. within block comment across line should be treated as a comment
 *
 *  to test this, a manual test is needed since our scanner test break testcase
 *  into mutiple small testcase line by line and this particular test required
 *  mutliple line to test it.
 *
 *  Hoever a simple test like below can be run via iteractive console.
 */

you_shouldve_see_this           // should print source (scanner default option)
/*
 * #pragma source off
 */
you_shouldnt_have_see_this      // should print source (scanner default option)

