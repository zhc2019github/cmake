#Make 最低版本号要求
cmake_minimum_required (VERSION 3.10)
aux_source_directory(. DIR_LIB_SRCS)

# 生成链接库
add_library (MathFunctions   SHARED  ${DIR_LIB_SRCS})
