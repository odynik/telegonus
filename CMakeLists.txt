cmake_minimum_required(VERSION 3.10)
project(telegonus)

#Bring the headers, such as xXx.h into the project
include_directories(inc)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(telegonus ${SOURCES})