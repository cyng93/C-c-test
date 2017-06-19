INPUT=$1

./parser $1 && jasmin output.j && java output && rm -f output.j output.class
