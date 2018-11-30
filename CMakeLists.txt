cmake_minimum_required ( VERSION 3.5 )


project ( "avoid_cpp_17" LANGUAGES CXX )


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-g -Wall")

add_executable(main
        main.cpp)