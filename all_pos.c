/* 1 - Lexical Definition */
// 1.1 delimeters
,
;
(
)
[
]
{
}

// 1.2 arithmetic, relational, logical operators
+
-
*
/
%
<=
<
=!
>=
>
==
&&
||
!

// 1.3 keyword
while
do
if
else
true
false
for
int
print
const
read
boolean
bool
void
float
double
string
continue
break
return

// 1.4 identifier
ident
Ident
IDENT
_ident
__indent
__3ident
ident3

// 1.5 integer constant
123
45
6
0
0123

// 1.6 floating point constant
0.0
02.03
123.45

// 1.7 scientific notation
1.23E4
1.23E+4
01.23E-4
123E04

// 1.8 string constant
","
";"
"("
")"
"["
"]"
"{"
"}"
"+"
"-"
"*"
"/"
"%"
"=<"
"<"
"=!"
"=>"
">"
"=="
"&&"
"||"
"!"
"while"
"do"
"if"
"else"
"true"
"false"
"for"
"int"
"print"
"const"
"read"
"boolean"
"bool"
"void"
"float"
"double"
"string"
"continue"
"break"
"return"
"ident"
"Ident"
"IDENT"
"_ident"
"__indent"
"__3ident"
"3ident"
"ident3"
"ident-3"
"-indent3"
"hello world"
"\"hello world\""
"hello world\\\\"
"hello world\a\b\c\d"
"string with tab			tab"
"string with space   space"
"#pragma source on"
"#pragma source off"
"#pragma token on"
"#pragma token off"
"#pragma statistic on"
"#pragma statistic off"
"//cpp-style comment in string"
"//c-sytle comment in string"

// 1.9 Comments - funny but we've already use them above ...
// C++ syntax line comment
/* C syntax block comment */
/*
 * block comment wrap
 * across
 * lines.
 */
// "line comment with string"
/*
 * "block comment with string"
 */

/* 2 - Pragma */
// 2.1 pragma source - reuse all test case, but without printing source
#pragma source off
,
;
(
)
[
]
{
}

+
-
*
/
%
<=
<
=!
>=
>
==
&&
||
!

while
do
if
else
true
false
for
int
print
const
read
boolean
bool
void
float
double
string
continue
break
return

ident
Ident
IDENT
_ident
__indent
__3ident
ident3

123
45
6
0
0123

0.0
02.03
123.45

1.23E4
1.23E+4
01.23E-4
123E04

","
";"
"("
")"
"["
"]"
"{"
"}"
"+"
"-"
"*"
"/"
"%"
"=<"
"<"
"=!"
"=>"
">"
"=="
"&&"
"||"
"!"
"while"
"do"
"if"
"else"
"true"
"false"
"for"
"int"
"print"
"const"
"read"
"boolean"
"bool"
"void"
"float"
"double"
"string"
"continue"
"break"
"return"
"ident"
"Ident"
"IDENT"
"_ident"
"__indent"
"__3ident"
"3ident"
"ident3"
"ident-3"
"-indent3"
"hello world"
"\"hello world\""
"hello world\\\\"
"#pragma source on"
"#pragma source off"
"#pragma token on"
"#pragma token off"
"#pragma statistic on"
"#pragma statistic off"
"//cpp-style comment in string"
"//c-sytle comment in string"

// C++ syntax line comment
/* C syntax block comment */
/*
 * block comment wrap
 * across
 * lines.
 */
// "line comment with string"
/*
 * "block comment with string"
 */
#pragma source on

// 2.2 - pragma token - reuse test cases in Sec.1, without printing token
#pragma token off
,
;
(
)
[
]
{
}

+
-
*
/
%
<=
<
=!
>=
>
==
&&
||
!

while
do
if
else
true
false
for
int
print
const
read
boolean
bool
void
float
double
string
continue
break
return

ident
Ident
IDENT
_ident
__indent
__3ident
ident3

123
45
6
0
0123

0.0
02.03
123.45

1.23E4
1.23E+4
01.23E-4
123E04

","
";"
"("
")"
"["
"]"
"{"
"}"
"+"
"-"
"*"
"/"
"%"
"=<"
"<"
"=!"
"=>"
">"
"=="
"&&"
"||"
"!"
"while"
"do"
"if"
"else"
"true"
"false"
"for"
"int"
"print"
"const"
"read"
"boolean"
"bool"
"void"
"float"
"double"
"string"
"continue"
"break"
"return"
"ident"
"Ident"
"IDENT"
"_ident"
"__indent"
"__3ident"
"3ident"
"ident3"
"ident-3"
"-indent3"
"hello world"
"\"hello world\""
"hello world\\\\"
"#pragma source on"
"#pragma source off"
"#pragma token on"
"#pragma token off"
"#pragma statistic on"
"#pragma statistic off"
"//cpp-style comment in string"
"//c-sytle comment in string"

// C++ syntax line comment
/* C syntax block comment */
/*
 * block comment wrap
 * across
 * lines.
 */
// "line comment with string"
/*
 * "block comment with string"
 */
#pragma token on

// 2.3 - comment can comes after pragma
#pragma source on  // follow by line comment
#pragma source on  /* follow by block comment */
#pragma source on  /* follow by block comment
wrap across line */

