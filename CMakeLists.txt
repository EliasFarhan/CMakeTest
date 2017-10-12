cmake_minimum_required(VERSION 3.9)
project(Monsters)

include_directories(include/)

file(GLOB_RECURSE MONSTERS_SRC src/*.cpp include/*.h)

add_executable(MONSTERS ${MONSTERS_SRC})