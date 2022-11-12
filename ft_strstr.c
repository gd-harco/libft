/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:19:07 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/21 18:19:07 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lookforstring(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] || s2[x])
	{
		if (s1[x] == s2[x])
		{
			if (!(s2[x + 1]))
				return (0);
			x++;
		}
		else
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *haystack, char *needle)
{
	char	*result;

	if (ft_strlen(needle) == 0)
		return (haystack);
	result = haystack;
	while (*result)
	{
		if (*result == needle[0])
		{
			if (lookforstring(result, needle) == 0)
				return (result);
		}
		result++;
	}
	return (NULL);
}
