#!/bin/sh

power(){
c=$1
d=$2
sum=1
while [ $d -gt 0 ]
do
	sum=`expr $sum \* $c`
	d=`expr $d - 1`
done
echo $sum
} # power function 

#main part of program, main problem is how to deal with "\*" in the command line

if [ $# -ne 3 ]
then
	echo "Usage: sh $0 operand1 operator operand2"
	exit 1
fi

operand1=$1
operator=$2
operand2=$3

if [ $operator != "+" ] && [ $operator != "-" ] && [ $operator != "x" ] && [ $operator != "X" ] && [ $operator != "/" ] && [ $operator != "%" ] && [ $operator != "^" ]
then
	echo "Error: invalid operator"
	exit 1
fi

if [ $operator = "^" ]
then
	power $operand1 $operand2
elif [ $operator = "x" ] || [ $operator = "X" ]
then
	expr $operand1 \* $operand2
else
	expr $operand1 $operator $operand2
fi


