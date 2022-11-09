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

	result = 0;
	x = 0;
	while (str[x] == ' ')
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			x = -1;
	}

	while (ft_isdigit(str[x]))
	{
		result = (result * 10) + (str[x] - '0');
		x++;
	}
	return (result);
}

#include <stdlib.h>
#include <stdio.h>
void main()
{
	char *str = "156983sd89";

	printf("resultat libc : %d\n", atoi(str));
	printf("resultat libft : %d\n", ft_atoi(str));
}

