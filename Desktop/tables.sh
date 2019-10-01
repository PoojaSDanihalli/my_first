echo "enter a num"
read num
for (( i=0 ; i<=10 ; i++))
do 
	echo $num "*" $i "=" `expr $num \* $i`
done 
