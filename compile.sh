#!/bin/bash

rm vectors/*

mkdir vectors

g++ generate_vectors.cpp -mavx -std=c++11 -o generate_vectors

./generate_vectors 50

g++ test.cpp -mavx -std=c++11 -o test_

g++ test_2.cpp -mavx -std=c++11 -o test_2

g++ time.cpp -mavx -std=c++11 -o time
