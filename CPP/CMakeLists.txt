cmake_minimum_required(VERSION 3.28)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Sem3Practical)

add_executable(CPP
        Sem3Practical/fibbonachi.cpp
        Sem3Practical/freq.cpp
        Sem3Practical/gcd.cpp
        Sem3Practical/gen_seq.cpp
        Sem3Practical/hanoi.cpp
        Sem3Practical/int_to_char.cpp
        Sem3Practical/matrix.cpp
        Sem3Practical/pascals_triangle.cpp
        Sem3Practical/prime_sum.cpp
        Sem3Practical/recur_fact.cpp
        Sem3Practical/recur_sum.cpp
        Sem3Practical/rem_dupe.cpp
        Sem3Practical/reversedigit.cpp
        Sem3Practical/sort_arr.cpp
        Sem3Practical/str.cpp
        Sem3Practical/swap.cpp
        database.cpp
        dup_arr.cpp
        mean.cpp
        median.cpp
        mode.cpp
        temp.c
        temp.cpp
        triangle.cpp)
