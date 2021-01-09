#!/bin/bash
i=1
while [ $i -le 20 ]; do
    echo test $i
    cp $i.in data.in
    time ./P1903
    if diff data.out $i.out; then
        echo AC
    else
        echo WA
        exit 0
    fi
    sleep 1.5s
    i=$(($i+1))
done