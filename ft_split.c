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

static int	get_word_length(const char *s, char charset)
{
	int	x;

	x = 0;
	while (s[x] != charset)
		x++;
	return (x);
}

static int	get_nb_word(char const *s, char c)
{
	int	nb_word;
	int	x;

	x = 1;
	nb_word = 0;
	while (s[x])
	{
		if (s[x] == c && s[x - 1] != c)
			nb_word++;
		x++;
	}
	if (nb_word != 0)
	{
		if (s[x - 1] != c)
			nb_word++;
	}
	return (nb_word);
}

static int	go_to_next_word(const char *s, char c)
{
	int	x;

	x = 0;
	while (s[x] == c)
		x++;
	return (x);
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	int		i;
	int		len;
	char	**dest;

	if (s == NULL)
		return (NULL);
	nb_word = get_nb_word(s, c);
	dest = malloc(sizeof(char *) * (nb_word + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < nb_word)
	{
		s = s + go_to_next_word(s, c);
		len = get_word_length(s, c);
		dest[i] = ft_substr(s, 0, len);
		s = s + len;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
