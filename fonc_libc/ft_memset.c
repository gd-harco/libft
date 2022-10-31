/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:27:22 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/30 19:27:22 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		x;
	void	*result;

	result = s;
	x = 0;
	while (x <= n)
	{
		s = c;
		s++;
		x++;
	}
	return (result);
}
