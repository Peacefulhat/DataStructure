#!/usr/bin/zsh
filePath=$1
dataStructurePath=$2
#some animation
gcc -o main $filePath $dataStructurePath
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
