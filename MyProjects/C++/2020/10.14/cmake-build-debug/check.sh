#!/bin/bash
while  true ; do
    ./maker>data.in
    time ./CF940F>my.out
    time ./std>st.out
    if  diff my.out  st.out ; then
        echo AC
    else
        echo WA
        exit 0
    fi
    sleep 1.5s
done