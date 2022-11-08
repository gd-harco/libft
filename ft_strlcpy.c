/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:10 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/08 17:57:52 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lenght;
	size_t	x;
	size_t	limit;

	lenght = ft_strlen(src);
	x = 0;
	limit = 0;
	if (ft_strlen(src) >= dstsize)
		limit = 1;
	while (x < dstsize - limit)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';

	return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>

int main()
{
	char *src = "Hello There";
	char dst[50];
	size_t result;
	char *libcsrc = "Hello There";
	char libcdst[50];
	size_t libcresult;
	ft_bzero(dst, 50);
	ft_bzero(libcdst, 50);

	printf("%s\n", dst);
	result = ft_strlcpy(dst, src, 12);
	printf("%s\n", dst);
	printf("%zu\n", result);

	printf("%s\n", libcdst);
	libcresult = strlcpy(libcdst, libcsrc, 12);
	printf("%s\n", libcdst);
	printf("%zu\n", libcresult);

	return 0;
}
