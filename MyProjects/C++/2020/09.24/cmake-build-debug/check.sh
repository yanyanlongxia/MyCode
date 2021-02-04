#!/bin/bash
for i in {1..100} ; do
    ./maker > recite.in
    time ./recite
    time ./std
    if diff recite.out recite.ans; then
        echo AC
    else
        echo WA
    fi
    sleep 0.5s
done
