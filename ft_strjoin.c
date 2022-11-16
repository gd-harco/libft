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

static char	*joning(char *result, char *s2, char *s1, int fsize)
{
	int x;
	int ss1;

	ss1 = ft_strlen(s1);
	x = 0;
	while (x < fsize)
	{
		while (x < ss1)
		{
			result[x] = s1[x];
			x++;
		}
		result[x] = s2[x - ss1];
		x++;
	}
	result[x] = '\0';
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		joined_size;
	char	*result;
	int		size_s1;
	int		size_s2;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen (s1);
	size_s2 = ft_strlen (s2);
	joined_size = (size_s1 + size_s2 + 1);
	result = malloc(sizeof(char) * joined_size);
	if (!result)
		return (NULL);
	return (joning(result, (char *)s2, (char *)s1, joined_size));
}
