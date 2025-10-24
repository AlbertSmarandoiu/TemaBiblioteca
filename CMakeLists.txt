cmake_minimum_required(VERSION 3.10)
project(TemaBiblioteca)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(TemaBiblioteca
    src/main.cpp
    src/Carte.cpp
    src/Biblioteca.cpp
)
