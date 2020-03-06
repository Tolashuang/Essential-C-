CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
SET(CMAKE_C_COMPILER gcc)
set(CMAKE_C_FLAGS "-fPIC -O0 ${CMAKE_C_FLAGS}")

add_executable(
    ./Chapter1/Q&A1.5.cpp
)
TARGET_LINK_LIBRARIES(./bin/utest pthread m)
