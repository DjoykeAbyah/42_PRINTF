/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexlow.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 18:54:57 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/21 18:59:44 by dreijans      ########   odam.nl         */
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

static int	put_hexlow(unsigned int n)
{
	unsigned long	j;

	j = (unsigned long) n;
	if ((n / 16) != 0)
		put_hexlow(n / 16);
	if ((n % 16) < 10)
	{
		print_char((n % 16) + 48);
	}
	else
	{
		print_char((n % 16) + 87);
	}
	return (n);
}

int	print_hexlow(unsigned int n)
{
	int	count;

	count = howmuch(n);
	put_hexlow(n);
	return (count);
}
