/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:07:51 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/11 14:12:33 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	x;

	x = 0;
	while ((((unsigned char *)s1)[x] || ((unsigned char *)s2)[x]) && n > 0)
	{
		if (((unsigned char *)s1)[x] == ((unsigned char *)s2)[x])
		{
			x++;
			n--;
		}
		else
			return (((unsigned char *)s1)[x] - ((unsigned char *)s2)[x]);
	}
	return (0);
}
