#!/bin/bash
g++ ../maker.cpp -o maker
g++ ../magic.cpp -o magic
g++ ../std.cpp -o std
for i in {1..20} ; do
    ./maker > magic.in
    time ./std
    time ./magic
    if diff magic.out magic.ans ; then
        echo AC
    else
        echo WA
    fi
    sleep 1.5s
done