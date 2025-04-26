echo "Enter the temperature in Celsius : "
read cel
# feh=$(((9 * cel + 160) / 5))
# feh=$(((9 * cel + 160) / 5))
feh=$(((cel * (9 / 5)) + 32))
echo "Temperature in Fahrenheit is : $feh"
