message("Processing ./srcs/numbers/CMakeLists.txt")

SET(NUMBERS_SOURCES
		ft_atoi.c
		ft_itoa.c
		ft_atof.c
)

foreach (src ${NUMBERS_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
