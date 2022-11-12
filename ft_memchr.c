/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:47 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/12 16:36:28 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	x;

	x = 0;
	while (n > 0)
	{
		if (((char *)s)[x] == c)
			return ((void *)(s + x));
		x++;
		n--;
	}
	return (NULL);
}
