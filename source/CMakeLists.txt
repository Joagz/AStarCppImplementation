cmake_minimum_required(VERSION 3.28)

project(Astar)

add_subdirectory(astar)

add_executable(Astar astar.cc)

target_link_libraries(Astar astarpathfinder)
