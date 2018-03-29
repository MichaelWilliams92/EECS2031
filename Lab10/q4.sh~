#!/bin/sh

if [ $# -ne 1 ]
then
	echo "Usage: sh $0 filename"
	exit 1
elif [ ! -f $1 ]
then
	echo "File $1 does not exist"
	exit 1
elif [ ! -s $1 ]
then
	echo "File $1 is empty"
	exit 1
else

	tr -sc A-Za-z '\012' < $1 | tr A-Z a-z | sort | uniq -c |
	while read num string
	do

		echo $string $num

	done

fi
