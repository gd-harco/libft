#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', );
		ft_putnbr_fd((-1 * n), fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(n % 10 + '0');
	}
	if (10 > n && n >= 0)
	{
		ft_putchar_fd(n + '0');
	}
}
