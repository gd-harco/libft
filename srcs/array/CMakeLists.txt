message("Processing ./srcs/array/CMakeLists.txt")

SET(ARRAY_SOURCES
		ft_add_array_line.c
		ft_array_dup.c
		ft_array_length.c
		ft_sort_array.c
		ft_merge_array.c
		ft_remove_array_line.c
)

foreach (src ${ARRAY_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
