/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:50:45 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/31 11:50:45 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*result;

	result = malloc(elementSize * elementCount);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, elementCount * elementSize);
	return (result);
}
