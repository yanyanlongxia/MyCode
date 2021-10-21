#!/bin/bash
i=1
while [ $i -le 20 ]; do
    echo test $i
    time ./travel<travel$i.in>travel.out
    if diff travel.out travel$i.out; then
        echo AC
    else
        echo WA
        exit 0
    fi
    i=$(($i+1))
done
