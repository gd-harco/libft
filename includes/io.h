/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:29:44 by gd-harco          #+#    #+#             */
/*   Updated: 2023/03/15 18:29:44 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *txt, ...);
int		ft_dprintf(int fd, const char *txt, ...);
size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putendl_fd(char *s, int fd);
size_t	ft_putnbr_fd(int n, int fd, size_t size);
size_t	ft_putstr_fd(char *s, int fd);

#endif
