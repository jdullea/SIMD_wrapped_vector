#i/bin/bash

source /opt/intel/bin/compilervars.sh intel64

rm -rf vectors

mkdir vectors
icpc generate_vectors.cpp -mavx -std=c++11 -o generate_vectors

./generate_vectors 50

icpc test.cpp -mavx -std=c++11 -o test_
icpc test_2.cpp -mavx -std=c++11 -o test_2
icpc time.cpp -mavx -std=c++11 -o time
