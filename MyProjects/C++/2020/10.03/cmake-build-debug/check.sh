#!/bin/bash
for i in {1..100} ; do
    ./maker > tmp.in
    time ./bf <tmp.in>bf.out
    time ./dragons <tmp.in>dragons.out
    if diff bf.out dragons.out; then
        echo AC
    else
        echo WA
        exit 0
    fi
done