message("Processing ./srcs/str/CMakeLists.txt")

SET(STR_SOURCES
		ft_split.c
		ft_free_split.c
		ft_strchr.c
		ft_strcmp.c
		ft_strdup.c
		ft_strpdup.c
		ft_striteri.c
		ft_strjoin.c
		ft_strlcat.c
		ft_strlcpy.c
		ft_strlen.c
		ft_strmapi.c
		ft_strncmp.c
		ft_strnstr.c
		ft_strrchr.c
		ft_strtrim.c
		ft_substr.c
)

foreach (src ${STR_SOURCES})
	list(APPEND LIBFT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${src})
endforeach ()

set(LIBFT_SOURCES ${LIBFT_SOURCES} PARENT_SCOPE)
