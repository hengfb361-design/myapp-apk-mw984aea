cmake_minimum_required(VERSION 3.10.2)
project("poolmod-engine")

add_library(
        poolmod-engine
        SHARED
        native-lib.cpp)

find_library(
        log-lib
        log)

target_link_libraries(
        poolmod-engine
        ${log-lib})
