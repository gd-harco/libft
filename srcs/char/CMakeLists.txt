message("Processing ./srcs/char/CMakeLists.txt")

SET(CHAR_SOURCES
		ft_isalnum.c
		ft_isalpha.c
		ft_isascii.c
		ft_isdigit.c
		ft_isprint.c
		ft_toupper.c
		ft_tolower.c
		ft_isspace.c
)

foreach (src ${CHAR_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
