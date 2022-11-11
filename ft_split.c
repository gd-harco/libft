/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:42:00 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/07 14:10:21 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_word(char const *s, char c)
{
	int	index;
	int	x;

	x = 0;
	index = 0;
	while (s[x])
	{
		if (s[x] == c)
			index++;
		x++;
	}
	return (index);
}

static int	in_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static void	splitnwrite(char **dest, const char *str, char charset, int nbr)
{
	int		i;
	int		j;
	int		len;
	char	*temp;

	i = 0;
	while (i < nbr)
	{
		while (in_charset(*str, charset))
			str++;
		if (!in_charset(*str, charset))
		{
			len = ft_strlen(str);
			temp = malloc(sizeof(char) * (len + 1));
			j = 0;
			while (j < len)
				temp[j++] = *str++;
			temp[j] = '\0';
			dest[i] = temp;
		}
		i++;
	}
	dest[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**big_table;

	nb_word = get_nb_word(s, c);
	big_table = malloc(sizeof(char *) * (nb_word +1));
	if (big_table == NULL)
		return (NULL);
	splitnwrite(big_table, s, c, nb_word);
	return (big_table);
}
