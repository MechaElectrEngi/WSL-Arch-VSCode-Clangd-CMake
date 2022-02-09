project(hello_world)
cmake_minimum_required(VERSION 3.15.0)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${CMAKE_PROJECT_NAME}
    Hello.cpp
    src/boo.cpp
)

find_package(fmt REQUIRED)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE fmt::fmt)

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE src)