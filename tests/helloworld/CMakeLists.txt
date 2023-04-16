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

add_executable(helloWorld ${testSrcFiles})
target_include_directories(helloWorld PUBLIC ${PROJECT_SOURCE_DIR}/src/include)
add_test(helloWorld ../bin/Debug/helloWorld.exe)
