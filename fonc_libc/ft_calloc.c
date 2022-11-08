/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:50:45 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/08 16:51:54 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t static	multiply(size_t Count, size_t Size)
{
	size_t	result;

	result = Count * Size;
	if (Size != Count / result)
		return (NULL);
	return (Size);
}

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*result;
	size_t	malloc_size;

	malloc_size = multiply(elementCount, elementSize);
	if (malloc_size == NULL)
		return (NULL);
	result = malloc(malloc_size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, malloc_size);
	return (result);
}
