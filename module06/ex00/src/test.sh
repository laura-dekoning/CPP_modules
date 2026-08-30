#!/bin/bash

test_case()
{
	input="$1"
	expected="$2"

	echo ">>> ./convert \"$input\""

	output=$(./convert "$input")

	echo "$output"

	if [ "$output" = "$expected" ]; then
		echo "✅ PASS"
	else
		echo "❌ FAIL"
		echo "Expected:"
		echo "$expected"
	fi

	echo
}

echo "========================================"
echo "                 INT"
echo "========================================"

test_case "0" \
"char:	Non displayable
int:	0
float:	0.0f
double:	0.0"

test_case "42" \
"char:	'*'
int:	42
float:	42.0f
double:	42.0"

test_case "-42" \
"char:	impossible
int:	-42
float:	-42.0f
double:	-42.0"

echo "========================================"
echo "                FLOAT"
echo "========================================"

test_case "42.0f" \
"char:	'*'
int:	42
float:	42.0f
double:	42.0"

test_case "-42.0f" \
"char:	impossible
int:	-42
float:	-42.0f
double:	-42.0"

test_case "3.14f" \
"char:	Non displayable
int:	3
float:	3.14f
double:	3.14"

echo "========================================"
echo "               DOUBLE"
echo "========================================"

test_case "42.0" \
"char:	'*'
int:	42
float:	42.0f
double:	42.0"

test_case "-42.5" \
"char:	impossible
int:	-42
float:	-42.5f
double:	-42.5"

echo "========================================"
echo "              SPECIAL"
echo "========================================"

test_case "nan" \
"char:	impossible
int:	impossible
float:	nanf
double:	nan"

test_case "nanf" \
"char:	impossible
int:	impossible
float:	nanf
double:	nan"

test_case "+inf" \
"char:	impossible
int:	impossible
float:	+inff
double:	+inf"

test_case "-inf" \
"char:	impossible
int:	impossible
float:	-inff
double:	-inf"

test_case "+inff" \
"char:	impossible
int:	impossible
float:	+inff
double:	+inf"

test_case "-inff" \
"char:	impossible
int:	impossible
float:	-inff
double:	-inf"

echo "========================================"
echo "             CHAR EDGE CASES"
echo "========================================"

test_case "0.0" \
"char:	Non displayable
int:	0
float:	0.0f
double:	0.0"

test_case "31.0" \
"char:	Non displayable
int:	31
float:	31.0f
double:	31.0"

test_case "32.0" \
"char:	' '
int:	32
float:	32.0f
double:	32.0"

test_case "126.0" \
"char:	'~'
int:	126
float:	126.0f
double:	126.0"

test_case "127.0" \
"char:	Non displayable
int:	127
float:	127.0f
double:	127.0"

test_case "128.0" \
"char:	impossible
int:	128
float:	128.0f
double:	128.0"

test_case "-0.1" \
"char:	impossible
int:	0
float:	-0.1f
double:	-0.1"

echo "========================================"
echo "             INT EDGE CASES"
echo "========================================"

test_case "1" \
"char:	Non displayable
int:	1
float:	1.0f
double:	1.0"

test_case "-1" \
"char:	impossible
int:	-1
float:	-1.0f
double:	-1.0"

test_case "127" \
"char:	Non displayable
int:	127
float:	127.0f
double:	127.0"

test_case "128" \
"char:	impossible
int:	128
float:	128.0f
double:	128.0"

test_case "32" \
"char:	' '
int:	32
float:	32.0f
double:	32.0"

test_case "31" \
"char:	Non displayable
int:	31
float:	31.0f
double:	31.0"

test_case "65" \
"char:	'A'
int:	65
float:	65.0f
double:	65.0"

test_case "90" \
"char:	'Z'
int:	90
float:	90.0f
double:	90.0"

test_case "97" \
"char:	'a'
int:	97
float:	97.0f
double:	97.0"

test_case "126" \
"char:	'~'
int:	126
float:	126.0f
double:	126.0"

test_case "2147483647" \
"char:	impossible
int:	2147483647
float:	2147483648.0f
double:	2147483647.0"

test_case "-2147483648" \
"char:	impossible
int:	-2147483648
float:	-2147483648.0f
double:	-2147483648.0"

echo "========================================"
echo "           FLOAT PRECISION"
echo "========================================"

test_case "0.123456f" \
"char:	Non displayable
int:	0
float:	0.123456f
double:	0.123456"

test_case "-0.123456f" \
"char:	impossible
int:	0
float:	-0.123456f
double:	-0.123456"

test_case "3.14159265f" \
"char:	Non displayable
int:	3
float:	3.14159f
double:	3.14159"

test_case "99.999f" \
"char:	'c'
int:	99
float:	99.999f
double:	99.999"

echo "========================================"
echo "          FRACTIONAL VALUES"
echo "========================================"

test_case "65.1" \
"char:	'A'
int:	65
float:	65.1f
double:	65.1"

test_case "65.5" \
"char:	'A'
int:	65
float:	65.5f
double:	65.5"

test_case "65.9" \
"char:	'A'
int:	65
float:	65.9f
double:	65.9"

test_case "-65.1" \
"char:	impossible
int:	-65
float:	-65.1f
double:	-65.1"

test_case "-65.9" \
"char:	impossible
int:	-65
float:	-65.9f
double:	-65.9"
