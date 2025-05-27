message("Processing ./srcs/io/CMakeLists.txt")

SET(IO_SOURCES
		ft_dprintf.c
		ft_printf.c
		ft_putchar_fd.c
		ft_putendl_fd.c
		ft_putnbr_fd.c
		ft_putstr_fd.c
		ft_GetNextLine/get_next_line.c
)

foreach (src ${IO_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
