#!/bin/bash
#to store information
#created by Pooja
#created 1/10/2019

for i in 1 2 3 4 5 
do
echo $i


#ans="y"
#while [ $ans = "y" ]
#do 
#clear


echo "enter ur name"
read name
echo "enter ur company"
read company
echo "enter ur mark1"
read mark1
echo "enter ur mark2"
read mark2
echo "enter ur mark3"
read mark3
add=`expr $mark1 + $mark2 + $mark3`
avg=`expr $add / 3`
if [ $avg -ge 75 ]
then 
grade="Distinction"

elif [ $avg -ge 65 ]
then
grade="FC"

else
grade="SC"
fi

echo "GM $name $company $mark1 $mark2 $mark3 $avg $grade">>data.txt


#echo "do you want to continue"
#read ans
#done
done

