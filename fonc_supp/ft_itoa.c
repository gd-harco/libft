/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:08:09 by gd-harco          #+#    #+#             */
/*   Updated: 2022/10/27 19:08:09 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// Function name ft_itoa
// Prototype char *ft_itoa(int n);
// Fichiers de rendu -
// Paramètres n: L’entier à convertir.
// Valeur de retour La chaîne de caractères représentant l’entier.
// NULL si l’allocation échoue.
// Fonctions externes
// autorisées
// malloc
// Description Alloue (avec malloc(3)) et retourne une chaîne
// de caractères représentant l’entier ’n’ reçu en
// argument. Les nombres négatifs doivent être gérés.
#include <stdlib.h>

int get_size(int n, int index, int count)
{
	if (n/index > 0)
		return(get_size(n, index*10, count+1));
	return count;
}

char	*negative_itoa(int n)
{
	int	strsize;
	int	x;
	char *converted;

	strsize = get_size(n, 1, 1);
	converted = malloc(sizeof(char)*strsize + 1);
	x = strsize-1;
	converted[strsize] = '\0';
	while (x > 0)
	{
		converted[x] = (n % 10) + '0';
		n /= 10;
		x--;
	}
	converted[x] = '-';
	return (converted);
}
char	*ft_itoa(int n)
{
	int	strsize;
	int	x;
	char *converted;

	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		return (negative_itoa(n *- 1));
	strsize = get_size(n, 1, 1);
	converted = malloc(sizeof(char)*strsize);
	x = strsize - 2;
	converted[strsize - 1] = '\0';
	while (x >= 0)
	{
		converted[x] = (n % 10) + '0';
		n /= 10;
		x--;
	}
	return (converted);
}
#include <stdio.h>
int main()
 {
	char * str = ft_itoa(-214748364);
	printf("%s\n", str);
	return 0;
 }
