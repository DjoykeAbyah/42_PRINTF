/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_pointer.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/24 13:19:50 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/24 13:20:57 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	howmuch(unsigned long int a)
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

static int	put_pointer(unsigned long int n)
{
	if ((n / 16) != 0)
		put_pointer(n / 16);
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

int	print_pointer(unsigned long int n)
{
	int	count;

	count = howmuch(n);
	put_pointer(n);
	return (count);
}
