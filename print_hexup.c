/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 18:55:12 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/21 18:59:20 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	howmuch(unsigned int a)
{
	int	i;

	i = 0;
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	return (i);
}

static int	put_hexup(unsigned int n)
{
	unsigned long	j;

	j = (unsigned long) n;
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
