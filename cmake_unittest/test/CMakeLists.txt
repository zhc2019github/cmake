cmake_minimum_required(VERSION 3.19)

project(ProjectTest)

aux_source_directory(. DIR_SRCS)

message(WARNING  "cmake current source dir :${CMAKE_CURRENT_SOURCE_DIR}")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../staticlib/)

message(WARNING  "cmake project source dir:${PROJECT_SOURCE_DIR}")

link_directories(${PROJECT_SOURCE_DIR})

#set (zhc $(PROJECT_SOURCE_DIR)/cmake/build/staticlib/)

#message(WARNING "cmake project source dir:${zhc}")

add_executable(testunit  ${DIR_SRCS})

target_link_libraries(testunit  libMathFunctions.a)

#启动测试

enable_testing()

add_test(test_run testunit)
