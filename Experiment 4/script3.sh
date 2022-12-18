echo "Enter the filename: "
read filename
echo "Enter the starting line number: "
read s
echo "Enter the ending line number: "
read n
sed -n $s,$n\p $filename | cat > new1.txt
cat new1.txt
