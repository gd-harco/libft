/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:27:39 by gd-harco          #+#    #+#             */
/*   Updated: 2023/05/12 14:28:25 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

bool	ft_strcmp(char *s1, char *s2)
{
	int	i;

	while (str[i] || str2[i])
	{
		if (str[i] != str2[i])
			return (false);
		i++;
	}
	if (str[i] == str2[i])
		return (true);
	else
		return (false);
}
