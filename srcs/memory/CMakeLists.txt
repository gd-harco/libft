message("Processing ./srcs/memory/CMakeLists.txt")

SET(MEMORY_SOURCES
		ft_bzero.c
		ft_calloc.c
		ft_memchr.c
		ft_memcmp.c
		ft_memcpy.c
		ft_memmove.c
		ft_memset.c
		ft_free_array.c
)

foreach (src ${MEMORY_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
