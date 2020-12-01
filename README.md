
# Installation

## Fedora

`sudo dnf install gtest-devel gmock-devel lcov`

## Ubuntu

`sudo apt install libgtest-dev libgmock-dev lcov`

# Layout

`gtest-example` contains C++ code and a `gtest` test suite.

`mock-example` contains C++ code and a `gtest` test suite that uses `gmock`. `gcov` and `lcov` are used to measure code coverage.
