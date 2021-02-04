#!/bin/bash
i=1
while [ $i -le 20 ]; do
    echo test $i
    time ./magnus<magnus$i.in>magnus.out
    if diff magnus.out magnus$i.out; then
        echo AC
    else
        echo WA
        exit 0
    fi
    i=$(($i+1))
done