
echo "enter a num1"
read num1
echo "enter a num2"
read num2
echo "press '1' to add, '2' to subtract, '3' to mul, '4' to div, '5' to exit"
echo "enter the choice"
read choice
case $choice in
	1) a=`expr $num1 + $num2`
		echo "add:$a";;
	2) a=`expr $num1 - $num2`
		echo "sub:$a";;
	3) a=`expr $num1 \* $num2`
		echo "mul:$a";;
	4) a=`expr $num1 / $num2`
		echo "div:$a";;
	5) exit;;
	
esac
sh choice.sh
