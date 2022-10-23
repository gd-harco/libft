
#include <unistd.h>

int	ft_strlen(const char *s);

void ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
