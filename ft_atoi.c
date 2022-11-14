/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:41:46 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/09 16:22:01 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	x;
	int	sign;

	result = 0;
	x = 0;
	sign = 1;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (ft_isdigit(str[x]))
	{
		result = (result * 10) + (str[x] - '0');
		x++;
	}
	return (result * sign);
}
