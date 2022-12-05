/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_unsigned.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 12:43:37 by dreijans      #+#    #+#                 */
/*   Updated: 2022/12/05 13:56:52 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	how_much(unsigned int a)
{
	int	i;

	i = 0;
	if (a <= 0)
		i = i + 1;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

static char	*u_toa(unsigned int n)
{
	char	*str;
	int		index;

	index = how_much(n);
	str = ft_calloc(index + 1, sizeof (char));
	if (str == NULL)
		return (NULL);
	index--;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[index] = (n % 10) + '0';
		n = n / 10;
		index--;
	}
	return (str);
}

int	print_unsigned(unsigned int n)
{
	int		count;
	char	*nbr;

	count = -1;
	nbr = u_toa(n);
	if (nbr != NULL)
	{
		count = write (1, nbr, ft_strlen(nbr));
		free (nbr);
	}
	return (count);
}
