/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:00 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/17 21:51:10 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*f)(void*))
{
	t_list	*buffer;

	if (!f)
		return (NULL);
	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone(*lst, f);
		*lst = buffer;
	}
}
