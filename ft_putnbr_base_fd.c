/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:38:12 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/27 16:38:12 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_for_base_error(char *base)
{
	int	i;
	int	current;

	i = 0;
	current = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[current])
	{
		while (i < current)
		{
			if ((base[i] == base[current]) \
				|| (base[current] == 43 || base[current] == 45))
				return (1);
			i++;
		}
		current++;
		i = 0;
	}
	return (0);
}

size_t	ft_putnbr_base_fd(int nbr, char *base, int fd, size_t size)
{
	unsigned int	base_lenght;
	unsigned int	nbr2;

	if (nbr < 0)
	{
		size += ft_putchar_fd('-', 1);
		nbr2 = nbr * -1;
	}
	else
		nbr2 = nbr;
	if (check_for_base_error(base))
		return (0);
	base_lenght = 0;
	while (base[base_lenght])
		base_lenght++;
	if (nbr2 >= base_lenght)
	{
		size += ft_putnbr_base_fd((nbr2 / base_lenght), base, fd, size);
		size += ft_putchar_fd(base[nbr2 % base_lenght], fd);
	}
	else
		size += ft_putchar_fd(base[nbr2], fd);
	return (size);
}
