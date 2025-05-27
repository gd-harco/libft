message("Processing ./srcs/file/CMakeLists.txt")

SET(FILE_SOURCES
		ft_file_in_char.c
)

foreach (src ${FILE_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
