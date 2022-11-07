/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:02:52 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/07 17:04:45 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;
	char	*str;

	x = 0;
	while (x < len)
	{
		str = (char *)src;
		*str++;
		*src++;
		x++;
	}
}
