/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:08:09 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/27 19:08:09 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n, int index, int count)
{
	if (n / index > 0)
		return (get_size(n, index * 10, count + 1));
	return (count);
}

static char	*itoa_min_null(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_strdup("0"));
}

static char	*negative_itoa(int n)
{
	int		strsize;
	int		x;
	char	*converted;

	strsize = get_size(n, 1, 1);
	converted = malloc(sizeof(char) * strsize + 1);
	if (!converted)
		return (NULL);
	x = strsize - 1;
	converted[strsize] = '\0';
	while (x > 0)
	{
		converted[x] = (n % 10) + '0';
		n /= 10;
		x--;
	}
	converted[x] = '-';
	return (converted);
}

char	*ft_itoa(int n)
{
	int		strsize;
	int		x;
	char	*converted;

	if ((n == (-2147483647 -1)) || n == 0)
		return (itoa_min_null(n));
	if (n < 0)
		return (negative_itoa(n * -1));
	strsize = get_size(n, 1, 1);
	converted = malloc(sizeof(char) * strsize);
	if (!converted)
		return (NULL);
	x = strsize - 2;
	converted[strsize - 1] = '\0';
	while (x >= 0)
	{
		converted[x] = (n % 10) + '0';
		n /= 10;
		x--;
	}
	return (converted);
}
