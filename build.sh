filePath=$1
dataStructurePath=$2
gcc -o main $filePath $dataStructurePath
echo
echo -n "compiling "
iterations=13
delay=0.040
for ((i = 1; i <= iterations; i++)); do
    echo -n "."
    sleep $delay
done
echo -e "\n"
./main
rm -rf main
