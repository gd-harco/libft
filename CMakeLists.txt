cmake_minimum_required(VERSION 3.20)

project(libft LANGUAGES C VERSION 2.0 DESCRIPTION "42 student basic lib")

message("Processing include")
include_directories(includes)

message("Processing subdirectories")
add_subdirectory(srcs/char)
add_subdirectory(srcs/io)
add_subdirectory(srcs/list)
add_subdirectory(srcs/memory)
add_subdirectory(srcs/numbers)
add_subdirectory(srcs/str)
add_subdirectory(srcs/array)
add_subdirectory(srcs/file)

add_library(ft SHARED ${LIBFT_SOURCES})
add_library(ft_static STATIC ${LIBFT_SOURCES})
set_property(TARGET ft_static PROPERTY OUTPUT_NAME ft)
