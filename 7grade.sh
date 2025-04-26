echo "Enter your marks : "
read marks
if [ $marks -ge 90 ];then
    gread="A"
elif [ $marks -ge 80 ] && [ $marks -lt 90 ];then
    gread="B"
elif [ $marks -ge 70 ] && [ $marks -lt 80 ];then
    gread="C"
elif [ $marks -ge 60 ] && [ $marks -lt 70 ];then
    gread="D"
else
    gread="F"
fi
echo "Your greade is : $gread"

