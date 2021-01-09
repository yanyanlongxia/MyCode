#!/bin/bash
for i in {1..100} ; do
    ./maker>tmp.in
    time ./reaction<tmp.in>reaction.out
    time ./std<tmp.in>std.out
    if diff reaction.out std.out ; then
        echo AC
    else
        echo WA
        exit 0
    fi
    sleep 1s
done