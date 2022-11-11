/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:27:19 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/11 16:49:37 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_charset(char c, char *charset)
{
	int	x;

	x = 0;
	while (charset[x])
	{
		if (c == charset[x])
			return (1);
		x++;
	}
	return (0);
}

static char	*look_for_start(char const *s, char const *set)
{
	char	*start;

	start = (char *)s;

	while (start)
	{
		if (in_charset((char)*start, (char *)set))
		{
			start++;
			return (start);
		}
		start++;
	}
	return (NULL);

}

static char	*look_for_end(char const *s, char const *set)
{
	char	*end;
	size_t	len;

	len = ft_strlen(s);
	end = (char *)s + len - 1;
	while (len > 0)
	{
		if (in_charset((char)*end, (char *)set))
		{
			return (end);
		}
		end--;
	}
	return (NULL);

}


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	size_t	len;
	char	*result;
	int		x;

	end = look_for_end(s1, set);
	start = look_for_start(s1, set);
	len = end - start;
	result = malloc(sizeof(int) * (len + 1));
	if (!result)
		return (NULL);
	x = 0;
	while (len > 0)
	{
		result[x] = *start;
		x++;
		start++;
		len--;
	}
	result[x] = '\0';
	return (result);
}
