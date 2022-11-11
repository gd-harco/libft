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

#include <stdlib.h>

int static	lookforstring(char *s1, char *s2)
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

char	*ft_strstr(char *sourcestring, char *tofind)
{
	char	*result;

	while (*sourcestring)
	{
		if (*sourcestring == tofind[0])
		{
			result = sourcestring;
			if (lookforstring(sourcestring, tofind) == 0)
				return (result);
		}
		*sourcestring++;
	}
	return (NULL);
}
