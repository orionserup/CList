cmake_minimum_required(VERSION 3.1)

project(CList)

file(GLOB SOURCES ../src/*.c)

include_directories(../include)

add_executable(${PROJECT_NAME} ${SOURCES}) 

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ../bin
)
