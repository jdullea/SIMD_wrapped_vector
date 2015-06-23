#/bin/bash

source /opt/intel/bin/compilervars.sh intel64

#rm -rf vectors

#mkdir vectors
#icpc generate_vectors.cpp -mavx -std=c++11 -o generate_vectors

#./generate_vectors 1024

echo "vectors generated"

#icpc test.cpp -mavx -std=c++11 -o test_vec
#icpc test_2.cpp -mavx -std=c++11 -o test_2
#icpc time.cpp -mavx -std=c++11 -o time

#g++ generate_timers.cpp -std=c++11 -o generate_timers

#echo "timers genarated"

#rm -rf timers

mkdir timers

./generate_timers 256


a=1

for file in timers/*
do
	let "a += 1"
	NAME=${file%.*}
	echo $file
	icpc $file -O3 -mavx -std=c++11 -o $NAME

done

