# CMake 最低版本号要求

cmake_minimum_required (VERSION 3.19.6)

# 项目信息

project (Demo3)
set(ALL_SOURCES CACHE INTERNAL "All sources to be compiled in this project" )
# 查找当前目录下的所有源文件

#定义一个宏开关
option(TEST_DEBUG "option for debug" OFF)
if (TEST_DEBUG)
add_definitions(-DTEST_DEBUG)
endif()

#定义一个宏开关
option(ZHC "option for debug" OFF)
if (ZHC)
add_definitions(-DZHC)
endif()

# 并将名称保存到 DIR_SRCS 变量

#aux_source_directory(. DIR_SRCS)

# 添加 src 子目录

add_subdirectory(src)

# 指定生成目标
include_directories(src)

add_executable(Demo main.cpp ${ALL_SOURCES})

