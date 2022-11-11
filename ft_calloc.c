/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:50:45 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/09 16:09:39 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	multiply(size_t count, size_t size)
{
	size_t	result;

	result = count * size;
	if (size != count / result)
		return (NULL);
	return (size);
}

void	*ft_calloc( size_t count, size_t size )
{
	void	*result;
	size_t	malloc_size;

	malloc_size = multiply(count, size);
	if (malloc_size == NULL)
		return (NULL);
	result = malloc(malloc_size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, malloc_size);
	return (result);
}
