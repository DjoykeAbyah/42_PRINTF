/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 18:55:12 by dreijans      #+#    #+#                 */
/*   Updated: 2022/12/05 13:57:56 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	how_much(unsigned int a)
{
	int	i;

	i = 0;
	if (a == 0)
		i++;
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	return (i);
}

static char	*hex_toa(unsigned int n)
{
	char	*str;
	int		index;
	int		mod;

	index = how_much(n);
	str = ft_calloc(index + 1, sizeof (char));
	if (str == NULL)
		return (NULL);
	index--;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		mod = n % 16;
		if (mod < 10)
			str[index] = mod + '0';
		else
			str[index] = (mod - 10) + 'A';
		n = n / 16;
		index--;
	}
	return (str);
}

int	print_hexup(unsigned int n)
{
	int		count;
	char	*nbr;

	count = -1;
	nbr = hex_toa(n);
	if (nbr)
	{
		count = write(1, nbr, ft_strlen(nbr));
		free (nbr);
	}
	return (count);
}
