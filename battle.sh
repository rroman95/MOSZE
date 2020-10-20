#!/bin/bash
IFS=$'\n'

rm kimenetek.txt

./output units/thor.json units/loki.json >> output.txt
./output units/thor.json units/hulk.json >> output.txt
./output units/loki.json units/thor.json >> output.txt
./output units/loki.json units/hulk.json >> output.txt 
./output units/hulk.json units/thor.json >> output.txt
./output units/hulk.json units/loki.json >> output.txt
