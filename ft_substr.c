/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:02:48 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/21 22:02:48 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;

	if (start > ft_strlen(s))
		return (0);
	x = start;
	y = 0;
	if (len == 0)
		return (0);
	if (len == start)
		return (1);
	while (s[x] && x < (len + start))
	{
		x++;
		y++;
	}
	return (y);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		result_length;
	int		x;

	if (s == NULL)
		return (NULL);
	result_length = get_length(s, start, len);
	result = malloc(sizeof(char) * (result_length + 1));
	if (result == NULL)
		return (NULL);
	x = 0;
	while (x < result_length)
	{
		result[x] = s[start];
		x++;
		start++;
	}
	result[x] = '\0';
	return (result);
}
