#! /bin/sh

rm -r out/*

mkdir out/
cd out/
g++ ../src/*.h ../test/*.cpp -o ./test -lgmock -O0 -lgtest -lpthread -Wall -Wextra -fprofile-arcs -ftest-coverage --coverage -fno-inline -fno-inline-small-functions -fno-default-inline -fkeep-inline-functions \
	&& lcov -c -i -d . -o basecoverage.out \
	&& ./test \
	&& lcov --rc lcov_branch_coverage=1 -c -d . -o report.out \
	&& lcov -a basecoverage.out -a report.out -o report.info \
	&& lcov --remove report.info '/usr/*' '*/test/*' --output-file report.info \
	&& genhtml --branch-coverage report.info

