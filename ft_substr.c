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
	int	x;
	int	y;

	x = start;
	y = 0;
	while (s[x] && x < len - 1)
	{
		x++;
		y++;
	}
	return (y + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		result_length;
	int		x;

	result_length = get_length(s, start, len);
	result = malloc(sizeof(char) * result_length);
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
