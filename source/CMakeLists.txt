cmake_minimum_required(VERSION 3.28)

project(Astar)

add_executable(Astar astar.cc)
target_link_directories(Astar PUBLIC astar)
target_link_directories(Astar PUBLIC map)
