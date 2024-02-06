cmake_minimum_required(VERSION 3.26.4)

project(Modelagem-de-Redes-Complexas-Joao-Victor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -O3 -fopenmp -march=native -mtune=native -funroll-loops")

file(GLOB source_files
        "*.hpp"
        "*.cpp"
        "Algorithms/source/*.cpp"
        "Algorithms/include/*.hpp"
        "Applications/source/*.cpp"
        "Applications/include/*.hpp"
        "Graph-Basis/source/*.cpp"
        "Graph-Basis/include/*.hpp"
)
add_executable(cnm ${source_files})

target_link_libraries(cnm m)
include_directories(./include)
