#!/bin/bash
for i in {1..1000000} ; do
    ./maker > data.in
    time ./bf < data.in > bf.out
    time ./ZR401 < data.in > ZR401.out
    if diff bf.out ZR401.out ; then
        printf "Accepted\n"
    else
        printf "Wrong Answer\n"
    fi
    sleep 0.5s
done