## 多个目录，多个源文件


#Cmake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

#项目信息
project(Demo3)

#查找当前目录下的所有源文件
#并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)

#添加 math 子目录
add_subdirectory(math)


# 指定生成目标
add_executable(Demo main.cc)

#添加链接库
#当需要将子目录下的源文件也编译进来时候
#需要将子目录的文件 添加到链接库
target_link_libraries(D)
 


