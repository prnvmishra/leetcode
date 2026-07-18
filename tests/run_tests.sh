#!/usr/bin/env bash
# Compile and run every unit test in this directory.
#
# Each test file is named "<problem>_test.cpp" and is a standalone executable
# that includes both lc_test.h and the solution under test.
#
# Usage:
#   ./run_tests.sh              # build & run all tests
#   ./run_tests.sh 217 15       # build & run only tests matching these patterns
#   CXX=g++-13 ./run_tests.sh   # override the compiler
set -uo pipefail

cd "$(dirname "$0")"

CXX="${CXX:-g++}"
CXXSTD="${CXXSTD:-c++20}"
BUILD_DIR="build"
mkdir -p "$BUILD_DIR"

shopt -s nullglob
tests=(*_test.cpp)

if [ "$#" -gt 0 ]; then
    filtered=()
    for t in "${tests[@]}"; do
        for pat in "$@"; do
            if [[ "$t" == *"$pat"* ]]; then
                filtered+=("$t")
                break
            fi
        done
    done
    tests=("${filtered[@]}")
fi

total=0
passed=0
failed=0
build_failed=0
failed_names=()

for t in "${tests[@]}"; do
    name="${t%_test.cpp}"
    bin="$BUILD_DIR/${name}"
    total=$((total + 1))
    if ! "$CXX" -std="$CXXSTD" -O0 -g -DTEST_NAME="\"$name\"" -I. "$t" -o "$bin" 2> "$BUILD_DIR/${name}.log"; then
        echo "BUILD-FAIL $name"
        sed 's/^/    /' "$BUILD_DIR/${name}.log" | head -20
        build_failed=$((build_failed + 1))
        failed_names+=("$name (build)")
        continue
    fi
    if "$bin"; then
        passed=$((passed + 1))
    else
        failed=$((failed + 1))
        failed_names+=("$name")
    fi
done

echo "------------------------------------------------------------"
echo "total: $total  passed: $passed  failed: $failed  build-failed: $build_failed"
if [ "${#failed_names[@]}" -gt 0 ]; then
    echo "failing:"
    for n in "${failed_names[@]}"; do echo "  - $n"; done
    exit 1
fi
echo "All tests passed."
