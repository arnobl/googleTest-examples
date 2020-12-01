#! /bin/sh

rm -r out/*

mkdir out
cd out/
g++ ../src/*.h ../test/*.cpp -o ./testbin -O0 -lgtest -lpthread -Wall -Wextra -fprofile-arcs -ftest-coverage \
	&& ./testbin \
	&& gcov ../test/*.cpp -o . \
	&& lcov --directory . --rc lcov_branch_coverage=1 -c -o report.info \
	&& genhtml --branch-coverage report.info

