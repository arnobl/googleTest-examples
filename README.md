
# Installation

## Fedora

`sudo dnf install gtest-devel gmock-devel`

# Ubuntu

`sudo apt install libgtest-dev libgmock-dev`

# Tests compilation and execution

`g++ -lgtest -lgtest_main -lpthread src/test/*.cpp -o out/test && ./out/test`


