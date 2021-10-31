#Make 最低版本号要求

cmake_minimum_required (VERSION 2.8)

# 项目信息

project (Demo3)

# 查找当前目录下的所有源文件

# 并将名称保存到 DIR_SRCS 变量

aux_source_directory(. DIR_SRCS)
message("test github")
# 添加 math 子目录

#ADD_SUBDIRECTORY(./staticlib)
include_directories(staticlib)
add_subdirectory(staticlib)

# 指定生成目标

add_executable(Demo  main.cpp)

# 添加链接库,默认找动态库，如果动态库没有就找对应的静态库

target_link_libraries(Demo  MathFunctions)

# 启用测试

enable_testing()

# 测试程序是否成功运行

add_test (test_run Demo 5 6)

# 测试帮助信息是否可以正常提示

add_test (test_usage Demo)

set_tests_properties (test_usage
  PROPERTIES PASS_REGULAR_EXPRESSION "Max function usage:.*value1 value2")
# 测试 5 的平方

add_test (test_5_2 Demo 5 2)
set_tests_properties (test_5_2 PROPERTIES PASS_REGULAR_EXPRESSION "is.*5")
