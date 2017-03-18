#!/bin/bash
#
# run_test.sh
#
# This script is use to test C-c compiler.
# Usage: ./run_test <PARTICULAR_TEST_INPUT>
#
# Author: cyng93
# Email:  cyng93<at>gmail.com


INPUT=$1
OUTPUT="${INPUT}.$(whoami)"
GOLD_ANS="${INPUT}.gold"

TEST_AVAILABLE=$(find . -iname "*.c")
USAGE="\
 ~> invalid syntax !\n\n\
 Usage: ./run_test.sh <PARTICULAR_TEST>\n\
 Available test: \n\
${TEST_AVAILABLE}\
 "



if [ "$#" -ne 1 ]; then
    echo -e "${USAGE}"
    exit -1
fi

# Create soft link to scanner if not exist
if [ ! -f 'scanner' ]; then
    echo -e " ~> scanner not found, trying to make it from upper directory..."
    WORKSPACE=$(pwd)
    cd .. && make && cp scanner ${WORKSPACE} && cd ${WORKSPACE}
fi

# Check if input file exist
if [ ! -f "${INPUT}" ]; then
    echo -e " ~>${INPUT} not found!"
    exit -1
fi

# Remove existed output file
if [ -f "${OUTPUT}" ]; then
    echo -e " ~> Please remove pre-existing '${OUTPUT}' !"
    rm -i ${OUTPUT}
fi

# For each line in `$INPUT`, feed them to scanner
CNT=1
TMP_FILE=$(date|md5sum|awk '{print $1}')
while IFS= read -r line
do
    echo "${line}" > ${TMP_FILE}
    echo -e "===== _INPUT - ${CNT} =====" >> "${OUTPUT}"
    echo -e "${line}" >> "${OUTPUT}"
    echo -e "===== OUTPUT - ${CNT} =====" >> "${OUTPUT}"
    ./scanner ${TMP_FILE} 2&>> "${OUTPUT}"
    rm ${TMP_FILE}
    let CNT=CNT+1
done < "$INPUT"

# Check if output.gold exist
if [ ! -f "${GOLD_ANS}" ]; then
    echo -e " ~> ${GOLD_ANS} not found!"
    echo -e "   ~> 'mv ${OUTPUT} ${GOLD_ANS}' if it's the desired answer for this particular test."
    exit -1
fi

echo -e " ~> Cross-check '${OUTPUT}' with '${GOLD_ANS}'..."
diff "${OUTPUT}" "${GOLD_ANS}"
retval=$?

if [ "${retval}" -eq "0" ]; then
    echo -e " ~> PASS!"
    rm ${OUTPUT}
else
    echo -e " ~> FAIL! ' vimdiff ${OUTPUT} ${GOLD_ANS} ' for detail !"
fi
