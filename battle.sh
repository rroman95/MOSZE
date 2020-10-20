#!/bin/bash
IFS=$'\n'

rm output.txt

./project units/thor.json units/loki.json >> output.txt
./project units/thor.json units/hulk.json >> output.txt
./project units/loki.json units/thor.json >> output.txt
./project units/loki.json units/hulk.json >> output.txt 
./project units/hulk.json units/thor.json >> output.txt
./project units/hulk.json units/loki.json >> output.txt

cat output.txt
DIFF=$(diff output.txt good_output.txt) 

if [ "$DIFF" != "" ] 
then
	echo "Not matching"
	exit 1
else
	echo "Matching"
fi
