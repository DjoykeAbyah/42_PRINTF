/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 18:55:12 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/24 13:25:09 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	howmuch(unsigned int a)
{
	int	i;

	i = 0;
	if (a == 0)
	{
		i++;
	}
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	return (i);
}

static int	put_hexup(unsigned long int n)
{
	if ((n / 16) != 0)
		put_hexup(n / 16);
	if ((n % 16) < 10)
	{
		print_char((n % 16) + 48);
	}
	else
	{
		print_char((n % 16) + 55);
	}
	return (n);
}

int	print_hexup(unsigned int n)
{
	int	count;

	count = howmuch(n);
	put_hexup(n);
	return (count);
}
