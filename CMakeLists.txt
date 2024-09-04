cmake_minimum_required(VERSION 3.22)
project(my_project)

add_subdirectory(lib/etl)
add_executable(my_project src/main.cpp)
target_link_libraries(my_project PRIVATE etl::etl)