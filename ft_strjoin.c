/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:32:49 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/21 22:32:49 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		joined_size;
	char	*result;
	int		x;
	int		size_s1;
	int		size_s2;

	size_s1 = ft_strlen (s1);
	size_s2 = ft_strlen (s2);
	joined_size = (size_s1 + size_s2 + 1);
	result = malloc(sizeof(char) * joined_size);
	x = 0;
	while (x < joined_size)
	{
		while (x < size_s1)
		{
			result[x] = s1[x];
			x++;
		}
		result[x] = s2[x - size_s1];
		x++;
	}
	result[x] = '\0';
	return (result);
}
