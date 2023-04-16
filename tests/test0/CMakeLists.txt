cmake_minimum_required(VERSION 3.1)
include(CTest)

enable_testing()

file(GLOB testSrcFiles
  ./src/*.h
  ./src/**/*.h
  ./src/*.hpp
  ./src/**/*.hpp
  ./src/*.c
  ./src/**/*.c
  ./src/*.cpp
  ./src/**/*.cpp
)

add_executable(test0 ${testSrcFiles})
target_include_directories(test0 PUBLIC
  ${PROJECT_SOURCE_DIR}/src/include
  ${PROJECT_SOURCE_DIR}/deps/HexBase/src/include
)
add_test(test0 ../bin/Debug/test0.exe)
