
#include <unistd.h>

int	ft_strlen(char *s);

void ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
