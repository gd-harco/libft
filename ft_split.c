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

static void	free_all(int i, char **dest)
{
	while (i <= 0)
	{
		free(dest[i]);
		i--;
	}
}

static int	get_word_length(const char *s, char charset)
{
	int	x;

	x = 0;
	while (!ft_strchr(&s[x], charset))
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
	if (s[x - 1] != c)
		nb_word++;
	return (nb_word);
}

static void	splitnwrite(char **dest, const char *str, char charset, int nbr)
{
	int		i;
	int		j;
	int		len;
	char	*temp;

	i = -1;
	while (i++ < nbr)
	{
		if (!ft_strchr(str, charset))
		{
			len = get_word_length(str, charset);
			temp = malloc(sizeof(char) * (len + 1));
			if (!temp)
				return (free_all(i, dest));
			j = 0;
			while (!ft_strchr(str, charset))
				temp[j++] = *str++;
			temp[j] = '\0';
			dest[i] = temp;
		}
	}
	free (temp);
	dest[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**dest;

	if (!c)
		return (malloc(sizeof(void *)));
	nb_word = get_nb_word(s, c);
	if (nb_word == 0)
		return (NULL);
	dest = malloc(sizeof(char *) * (nb_word + 1));
	if (dest == NULL)
		return (NULL);
	splitnwrite(dest, s, c, nb_word);
	return (dest);
}
void main()
{
char *string = "      split       this for   me  !       ";
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char **result = ft_split(string, ' ');
}
