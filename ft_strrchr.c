/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:09:12 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/10 16:09:12 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen(s) - 1;
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}

	while (s[x])
	{
		if (s[x] == c)
			return ((char *) s + x);
		x--;
	}
	return (NULL);
}
