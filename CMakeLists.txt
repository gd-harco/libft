cmake_minimum_required(VERSION 3.9)

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

message("Creating Shared Object")
add_library(${PROJECT_NAME} SHARED ${LIBFT_SOURCES})
