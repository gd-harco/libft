message("Processing ./srcs/list/CMakeLists.txt")

SET(LIST_SOURCES
		ft_lstadd_back_bonus.c
		ft_lstadd_front_bonus.c
		ft_lstclear_bonus.c
		ft_lstdelone_bonus.c
		ft_lstiter_bonus.c
		ft_lstlast_bonus.c
		ft_lstmap_bonus.c
		ft_lstnew_bonus.c
		ft_lstsize_bonus.c
)

foreach (src ${LIST_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
