echo "Enter a number : "
read num
echo "Counting from 1 to $num : "
count=1
while [ $count -le $num ];do
echo -n "$count "
(( count++ ))
done