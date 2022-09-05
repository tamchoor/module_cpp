#! usr/bin/bash

make re

echo "___________________"
echo "test 0"
./convert 0
echo "___________________"
echo "test 42"
./convert 42
echo "___________________"
echo "test 100000"
./convert 100000
echo "___________________"
echo "test 48"
./convert 48
echo "___________________"
echo "test a"
./convert a
echo "___________________"
echo "test \"*\""
./convert "*"
echo "___________________"
echo "test \"**\""
./convert "**"
echo "___________________"
echo "test \";\""
./convert ";"
echo "___________________"
echo "test nanf"
./convert nanf
echo "___________________"
echo "test inff"
./convert inff
echo "___________________"
echo "test 42.0f"
./convert 42.0f
echo "___________________"
echo "test 42.43f"
./convert 42.43f
echo "___________________"
echo "test nan"
./convert nan
echo "___________________"
echo "test inf"
./convert inf
echo "___________________"
echo "test 42.0"
./convert 42.0
echo "___________________"
echo "test 42.43"
./convert 42.43
echo "___________________"
echo "test nanff"
./convert nanff
echo "___________________"
echo "test infff"
./convert infff
echo "___________________"
echo "test 42.0ff"
./convert 42.0ff
echo "___________________"
echo "test 42.43.0"
./convert 42.43.0