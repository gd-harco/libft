/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:00 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/17 17:21:33 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*f)(void*))
{
	t_list	*buffer;

	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone(*lst, f);
		*lst = buffer;
	}
}
