/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:30:19 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/12 12:39:09 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while ((s1[x] || s2[x]) && x <= n)
	{
		if (s1[x] == s2[x])
			x++;
		else
			return (s1[x] - s2[x]);
	}
	return (0);
}
