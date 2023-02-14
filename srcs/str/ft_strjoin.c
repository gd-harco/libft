/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:48:11 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/14 16:42:59 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:32:49 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/21 22:32:49 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/homes/gd-harco/Documents/libft/includes/str.h"
#include "/nfs/homes/gd-harco/Documents/libft/includes/memory.h"

static char	*joning(char *result, char **strings)
{
	size_t	x;
	size_t	y;
	size_t	cur_string;

	cur_string = 0;
	x = 0;
	while (strings[cur_string])
	{
		y = 0;
		while (strings[cur_string][y++])
		{
			result[x] = strings[cur_string][y];
			x++;
			y++;
		}
		cur_string++;
	}
	result[x] = '\0';
	return (result);
}

char	*ft_strjoin(int str_nb, ...)
{
	size_t	joined_size;
	char	*result;
	va_list	args;
	char	**strings;
	int		current_place;

	current_place = 0;
	va_start(args, str_nb);
	joined_size = 0;
	strings = malloc(sizeof(char *) * str_nb);
	while (current_place++ < str_nb)
	{
		strings[current_place] = va_arg(args, char *);
		if (!strings[current_place])
			return (NULL);
		joined_size += ft_strlen((char *) strings[current_place]);
	}
	va_end(args);
	//TODO comprendre WTF se passe ici
	result = malloc(sizeof(char) * joined_size + 1);
	if (!result)
		return (NULL);
	return (joning(result, strings));
}

int main()
{
	char *s1 = "hello";
	char *s2 = "there";

	ft_strjoin(3, s1, "-", s2);
	return 0;
}