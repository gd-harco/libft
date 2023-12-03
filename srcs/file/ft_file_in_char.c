#include "libft.h"

/**
 * @brief Reads the contents of a specified file into a character array.
 *
 * This function reads the contents of the file associated with the given file descriptor
 * and stores them in a dynamically allocated character array. The file must be open and
 * accessible for reading. The caller is responsible for freeing the memory allocated by
 * this function.
 *
 * @param fd The file descriptor of the file to be read.
 * @return A pointer to the character array containing the file contents, or NULL if an error occurs.
 */

char **ft_file_in_char(int fd){
	char *line;
	char **array;

	array = ft_calloc(1, sizeof (char *));
	line = get_next_line(fd);
	while (line)
	{
		ft_add_array_line((void **) array, line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	return array;
}
