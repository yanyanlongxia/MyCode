#!/bin/bash
for i in {1..1000000} ; do
    ./maker > tmp.in
    time ./bf < tmp.in > bf.out
    time ./std < tmp.in > std.out
    if diff bf.out std.out ; then
        printf "Accepted\n"
    else
        printf "Wrong Answer\n"
        exit 0;
    fi
done