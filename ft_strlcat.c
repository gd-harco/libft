/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:33 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/09 14:40:24 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_pos;
	size_t	limit;
	size_t	init_size;
	int		x;

	x = 0;
	init_size = ft_strlen(dst);
	dest_pos = init_size;
	while (dest_pos < dstsize)
	{
		dst[dest_pos] = src[x];
		x++;
		dest_pos++;
	}
	dst[dest_pos] = '\0';
	return (ft_strlen(src) + init_size);
}
