#!/bin/bash

var = "FOO"

echo $var


echo "Your name please"
read name

echo "please enter age"
read age

echo "Batch Size"
read bsz

echo "finally $name age $age batch size $bsz"


read -p "provide the fruit name"  fruit
echo ""


if [ $fruit = apple ]
	then echo "great match"
elif [ $fruit = banana ]
	then echo "oh not so bad"
	else echo "may be next time"
fi


