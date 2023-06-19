/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:27:39 by gd-harco          #+#    #+#             */
/*   Updated: 2023/05/12 16:10:01 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/**
 * @function ft_strcmp
 * @brief Compare two strings.
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @return true if the strings are identical, false otherwise.
 * @author gd-harco
 */

bool	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (false);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (false);
		i++;
	}
	if (s1[i] == s2[i])
		return (true);
	else
		return (false);
}
