cmake_minimum_required(VERSION 3.17)
project(Google_BM VERSION 1.0.0)

include_directories(${PROJECT_SOURCE_DIR}/benchmark/include/benchmark)

add_executable(main main.cpp)

target_link_libraries(main ${PROJECT_SOURCE_DIR}/benchmark/build/src/debug/benchmark.lib ${PROJECT_SOURCE_DIR}/benchmark/build/src/debug/benchmark_main.lib)

