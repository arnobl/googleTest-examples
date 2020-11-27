#! /bin/sh

cd out/
g++ ../src/*.h ../test/*.cpp -o ./test -lgmock -lgtest -lpthread -Wall -Wextra -fprofile-arcs -ftest-coverage \
	&& ./test \
	&& gcov ../test/AllTest.cpp -o . \
	&& lcov --directory . -c -o report.info \
	&& genhtml report.info

