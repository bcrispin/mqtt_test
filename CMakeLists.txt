cmake_minimum_required(VERSION 3.3)
project(mqtt_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    CMakeLists.txt
    main.c)

add_executable(mqtt_test ${SOURCE_FILES})